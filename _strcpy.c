#include "main.h"
/**
 * _strcpy - copies string
 * @dest: pointer to string
 * @src: pointer to string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
