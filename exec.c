#include "main.h"
/**
 * exec - executes command
 * @argv: argument vector
 * Return: nothing
 */
void exec(char *argv[])
{
	char *comm, *comm_path;

	comm = NULL;
	comm_path = NULL;
	if (argv)
	{
		comm = argv[0];
		comm_path = get_path(comm);
		if (execve(comm_path, argv, NULL) == -1)
		{
			perror("Error:");
		}
	}
}
