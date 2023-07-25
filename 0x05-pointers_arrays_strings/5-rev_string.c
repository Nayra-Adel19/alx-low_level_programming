#include "main.h"

/**
 * _strlen - the length of a str
 *@s: str
 *Return: length
 */

int _strlen(char *s)
{

	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);

}

/**
 * rev_string - reverses a str
 *@s: str
 */

void rev_string(char *s)
{

	int i = 0;
	int j = (_strlen(s) - 1);
	char tmp;

	while (i < j)
	{

		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++, j--;
	}
}
