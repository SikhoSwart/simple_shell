#include "main.h"
/**
 * _strdup - allocates new space in memory for duplicate string
 * @s: string
 * Return: duplicate string or null
 */
char *_strdup(char *s)
{
	int i, j;
	char *dupl = NULL;

	if (s == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	dupl = (char *)malloc((j + 1) * sizeof(char));
	if (dupl != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			dupl[i] = s[i];
		}
	}
	else if (dupl == NULL)
	{
		return (NULL);
	}
	dupl[i] = '\0';
	return (dupl);
}
