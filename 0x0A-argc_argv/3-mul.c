#include <stdio.h>
#include "main.h"

/**
 * _atoi -> Converts a str
 *@s: Str
 *Return: intger converted from str
 */

int _atoi(char *s)
{
	int b, a, n, len, f, digit;

	b = 0;
	a = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')

		len++;

	while (b < len && f == 0)
	{
		if (s[b] == '-')

			++a;

		if (s[b] >= '0' && s[b] <= '9')
		{
			digit = s[b] - '0';

			if (a % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;

			if (s[b + 1] < '0' || s[b + 1] > '9')
			{
				break;
			}			f = 0;
		}		b++;
	}
	if (f == 0)
	{
		return (0);
	}	return (n);

}

/**
 * main -> multiplies 2 num
 *@argc: num
 *@argv: arr
 *Return: 0 Success
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{

		printf("Error\n");
		return (1);
	}	num1 = _atoi(argv[1]);

	num2 = _atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);

}
