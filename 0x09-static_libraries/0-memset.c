#include "main.h"

/**
 *  _memset -> Fill in part of memory
 *@n: num
 *@b: Des
 *@s: memory
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int a;

	for (a = 0; a < n; a++)
	{

		s[a] = b;

	}	return (s);


}
