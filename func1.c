#include "shell.h"

/**
 * bfree - frees pointer
 * @ptr: address of pointer to free
 * Return: 0
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
