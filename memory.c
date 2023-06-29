#include "shell.h"

/**
 * bfree - free a Pointer and NULLs the address
 * @ptr: address of the Pointer to free
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
