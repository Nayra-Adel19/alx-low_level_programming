#include "main.h"

/**
 * _memcpy -> Function copies 'n'
 *@n: Number
 *@src: Memory
 *@dest: Memory
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	int v = 0;
	int x = n;

	for (; v < x; v++)
	{
		dest[v] = src[v];
		n--;
	}

	return (dest);

}
