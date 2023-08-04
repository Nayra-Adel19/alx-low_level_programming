#include "main.h"

/**
 * _strcmp -> compares 2 strings
 *@s1: 1 string
 *@s2: 2 string
 *Return: less than (0)
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{

		if (*s1 == '\0')
		{

			return (0);

		}		s1++;

		s2++;


	}	return (*s1 - *s2);


}
