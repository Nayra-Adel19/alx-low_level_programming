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
 * puts2 - to print every 2 char of a str
 *@str: str
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
	{

		_putchar(str[i]);

	}

	_putchar('\n');

}
