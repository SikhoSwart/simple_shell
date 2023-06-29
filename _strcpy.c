#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer
 * @src: pointer
 * Return: value, the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	for (i = 0; src[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);

}
