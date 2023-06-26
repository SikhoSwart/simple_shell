#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
	char *pro = "shell$ ", *tok;
	int i, num = 0;
	char *comm = NULL, *cp_comm = NULL;
	const char *del = "\n";
	size_t byte = 0;
	ssize_t ch;
	(void) argc;

	while (2)
	{
		printf("%s", pro);
		ch = getline(&comm, &byte, stdin);
		if (ch == -1)
		{
			printf("\n");
			return (-1);
		}
		cp_comm = malloc(sizeof(char) * ch);
		if (cp_comm == NULL)
		{
			perror("tsh: memory allocation error");
			return (-1);
		}
		_strcpy(cp_comm, comm);
		tok = strtok(comm, del);
		while (tok != NULL)
		{
			num++;
			tok = strtok(NULL, del);
		}
		num++;
		argv = malloc(sizeof(char *) * num);
		tok = strtok(cp_comm, del);
		for (i = 0; tok != NULL; i++)
		{
			argv[i] = malloc(sizeof(char) * _strlen(tok));
			_strcpy(argv[i], tok);
			tok = strtok(NULL, del);
		}
		argv[i] = NULL;
		exec(argv);
	}
	free(comm);
	free(cp_comm);
	return (0);
}
