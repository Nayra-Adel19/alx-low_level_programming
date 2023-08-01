#include "main.h"

/**
 * _strpbrk -> Function locates the first occurrence
 *@s: String
 *@accept: String
 *Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}

		s++;
	}

	return ('\0');

}
