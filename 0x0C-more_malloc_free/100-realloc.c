#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc
 *@ptr: Pointer
 *@old_size: Old size
 *@new_size: New size
 *Return: Pointer -> new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *temp_ptr;
	unsigned int b;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}		free(ptr);
		return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	temp_ptr = ptr;

	for (b = 0; b < old_size; b++)
	{
		new_ptr[b] = temp_ptr[b];
	}	free(ptr);
	return (new_ptr);
}
