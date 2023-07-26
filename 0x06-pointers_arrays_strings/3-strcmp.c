#include "main.h"

/**
 * _strcmp - compares two strings
 *@s1: 1 string to compare
 *@s2: 2 string to compare
 *
 *Return: less than 0 if s1 is less than s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);

		s1++;
		s2++;

	}

	return (*s1 - *s2);
}
