#include "main.h"

/**
 * _strstr -> Function finds the first occurrence
 *@haystack: The (string)
 *@needle: The (string)
 *Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *y = haystack;
		char *x = needle;

		while (*y == *x && *x != '\0')
		{
			y++;
			x++;
		}

		if (*x == '\0')
		{
			return (haystack);
		}

	}
	return (0);
}
