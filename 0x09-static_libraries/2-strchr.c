#include "main.h"

/**
 * _strchr -> a pointer to the 1 occurrence
 *@s: char
 *@c: char
 *Return: (0) Success
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{

		if (s[x] == c)
			return (&s[x]);


	}	return (0);


}
