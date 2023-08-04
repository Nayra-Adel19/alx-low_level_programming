#include "main.h"

int actual_sqrt_recursion(int n, int m);


/**
 * _sqrt_recursion - the natural square root
 *@n: Num
 *Return: square
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{

		return (-1);

	}	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - to find the natural square
 *@n: Num
 *@m: Repeat
 *Return: square
 */

int actual_sqrt_recursion(int n, int m)
{

	if (m * m > n)
		return (-1);


	if (m * m == n)
	{

		return (m);

	}	return (actual_sqrt_recursion(n, m + 1));

}
