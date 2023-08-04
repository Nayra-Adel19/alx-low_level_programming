#include "main.h"

int actual_prime(int n, int m);


/**
 * is_prime_number -> It says if an int is a prime num
 *@n: num
 *Return: (0) if is not
 */

int is_prime_number(int n)
{

	if (n <= 1)
	{

		return (0);

	}	return (actual_prime(n, n - 1));

}

/**
 * actual_prime -> It calculate if a num is prime
 *@n: num
 *@m: Rep
 *Return: (0) if is not
 */

int actual_prime(int n, int m)
{

	if (m == 1)

		return (1);


	if (n % m == 0 && m > 0)
	{

		return (0);

	}	return (actual_prime(n, m - 1));

}
