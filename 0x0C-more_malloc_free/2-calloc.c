#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _memset - It Fills memory with a constant byte
 *@a: Pointer
 *@b: Constant
 *@c: Max bytes
 *Return: A pointer (a)
 */

char *_memset(char *a, char b, unsigned int c)
{
	unsigned int i;

	for (i = 0; i < c; i++)
	{
		a[i] = b;
	}	return (a);
}

/**
 * _calloc - Allocates memory for an array
 *@nmemb: Array
 *@size: Size
 *Return: A pointer -> allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}	x = malloc(size * nmemb);

	if (x == NULL)
	{
		return (NULL);
	}	_memset(x, 0, size * nmemb);

	return (x);
}
