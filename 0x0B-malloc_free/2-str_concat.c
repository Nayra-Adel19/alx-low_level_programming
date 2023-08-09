#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenates 2 str
 *@s1: 1 Str
 *@s2: 2 str
 *Return: Pointer -> new str
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int b = 0, a = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
	{
		len1++;
	}

	while (s2 && s2[len2])
	{
		len2++;

	}	s3 = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}	b = 0;
	a = 0;

	if (s1)
	{
		while (b < len1)
		{
			s3[b] = s1[b];
			b++;
		}
	}

	if (s2)
	{
		while (b < (len1 + len2))
		{
			s3[b] = s2[a];
			b++;
			a++;
		}
	}	s3[b] = '\0';
	return (s3);
}
