#include "main.h"

int check_pal(char *s, int x, int len);
int _strlen_recursion(char *s);


/**
 * is_palindrome - It str is a palindrome
 *@s: str
 *Return: (0) if not
 */

int is_palindrome(char *s)
{

	if (*s == 0)
	{

		return (1);

	}	return (check_pal(s, 0, _strlen_recursion(s)));

}

/**
 * _strlen_recursion - length of a str
 *@s: str
 *Return: Length
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{

		return (0);

	}	return (1 + _strlen_recursion(s + 1));

}

/**
 * check_pal - char recursively for palindrome
 *@s: str
 *@x: Repeated
 *@len: length
 *Return: (0) if not
 */

int check_pal(char *s, int x, int len)
{

	if (*(s + x) != *(s + len - 1))
	{

		return (0);

	}

	if (x >= len)
	{

		return (1);

	}	return (check_pal(s, x + 1, len - 1));

}
