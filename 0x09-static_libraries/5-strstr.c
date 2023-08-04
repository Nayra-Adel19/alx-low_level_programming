#include "main.h"

/**
 * _strstr -> To find the 1 occurrence
 *@haystack: str
 *@needle: str
 *Return: 0 Success
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
			return (haystack);


	}	return (0);

}
