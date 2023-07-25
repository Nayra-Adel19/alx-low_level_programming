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
 * puts_half - to print half of a str
 *@str: str
 */

void puts_half(char *str)
{

	int idx;
	int len = _strlen(str);

	if (len % 2 != 0)
	{
		idx = (len / 2) + 1;
	}
	else
		idx = (len / 2);
	while (idx < len)
	{
		_putchar(*(str + idx));
		idx++;
	}

	_putchar('\n');

}
