#include "main.h"
/**
 * get_path - get path for command
 * @comm: command
 * Return: path;
 */
char *get_path(char *comm)
{
	int c_len, d_len;
	struct stat buff;
	char *tok, *file;
	char *path, *cp_path;

	path = getenv("PATH");
	if (path)
	{
		c_len = _strlen(comm);
		cp_path = _strdup(path);
		tok = strtok(cp_path, ":");
		while (tok != NULL)
		{
			d_len = _strlen(tok);
			file = malloc(c_len + d_len + 2);
			_strcpy(file, tok);
			_strcat(file, "/");
			_strcat(file, comm);
			_strcat(file, "\0");
			if (stat(file, &buff) == 0)
			{
				free(cp_path);
				return (file);
			}
			else
			{
				free(file);
				tok = strtok(NULL, ":");
			}
		}
		free(cp_path);
		if (stat(comm, &buff) == 0)
		{
			return (comm);
		}
		return (NULL);
	}
	return (NULL);

}
