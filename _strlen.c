#include "main.h"
/**
 * _strlen - get length of string
 * @str: string
 * Return: length of str
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
