#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all
 *@n: N
 *@...: Int
 *Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{

	int a = 0, h = n;

	va_list ap;

	if (!n)
	{

		return (0);

	}	va_start(ap, n);

	while (h--)
	{

		a += va_arg(ap, int);

	}	va_end(ap);
	return (a);

}
