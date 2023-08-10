#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *@s1: the first (String)
 *@s2: the second (String)
 *@n: Is a greater or equal
 *Return: Pointer shall point
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a, b, s1_length, s2_length;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;

	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;

	str = malloc(s1_length + n + 1);
	if (str == NULL)

		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		str[a] = s1[a];

	for (b = 0; b < n; b++)
	{
	str[a] = s2[b];
		a++;
	}	str[a] = '\0';
	return (str);
}
