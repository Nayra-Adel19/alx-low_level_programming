#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if char is digit
 *@c: The char to check
 *Return: 1 if digit 0 otherwise
 */

int _isdigit(int c)
{

	return (c >= '0' && c <= '9');
}

/**
 * _strlen - the length of a str
 *@s: The str whose length
 *Return: Integer length of str
 */

int _strlen(char *s)
{
	int x = 0;

	while (*s++)
	{
		x++;
	}	return (x);
}

/**
 * big_multiply - Multiply two big number strings
 *@s1: The first number
 *@s2: The second number
 *Return: The product big num
 */

char *big_multiply(char *s1, char *s2)
{
	char *q;
	int l1, l2, u, v, y, z;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	q = malloc(u = z = l1 + l2);
	if (!q)
		printf("Error\n"), exit(98);
	while (u--)
		q[u] = 0;

	for (l1--; l1 >= 0; l1--)
	{
		if (!_isdigit(s1[l1]))
		{
			free(q);
			printf("Error\n"), exit(98);
		}		u = s1[l1] - '0';
		y = 0;

		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			if (!_isdigit(s2[l2]))
			{
				free(q);
				printf("Error\n"), exit(98);
			}			v = s2[l2] - '0';
			y += q[l1 + l2 + 1] + (u * v);
			q[l1 + l2 + 1] = y % 10;
			y /= 10;
		}
		if (y)
		{
			q[l1 + l2 + 1] += y;
		}
	}	return (q);
}

/**
 * main - Multiply 2 big number str
 *@argc: The number
 *@argv: The vector
 *Return: 0 on successful
 */

int main(int argc, char **argv)
{
	char *q;
	int u, y, z;

	if (argc != 3)
		printf("Error\n"), exit(98);

	z = _strlen(argv[1]) + _strlen(argv[2]);
	q = big_multiply(argv[1], argv[2]);
	y = 0;
	u = 0;
	while (y < z)
	{
		if (q[y])
			u = 1;
		if (u)
		{
			_putchar(q[y] + '0');
		}		y++;
	}
	if (!u)
	{
		_putchar('0');
	}	_putchar('\n');
	free(q);
	return (0);
}
