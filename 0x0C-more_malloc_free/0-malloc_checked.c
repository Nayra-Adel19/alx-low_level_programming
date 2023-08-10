#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 *@b: Integer
 *Return: A pointer -> allocated memory or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == 0)
	{
		exit(98);
	}	return (a);
}
