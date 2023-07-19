#include "main.h"

/**
 * largest_number - the largest of three numbers
 *@a: 1 integer
 *@b: 2 integer
 *@c: 3 integer
 * Return: largest num
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
		largest = a;
	else if (a > b && b < c)
	{
		if (a > c)
			largest = a;
		else
			largest = c;
	}
	else if (b > a && a > c)
		largest = b;
	else if (b > a && a < c)
	{
		if (b > c)
			largest = b;
		else
			largest = c;
	}
	else if (a == b && a == c)
		largest = a;
	else
	{
		if ((a == b && a > c) || (a == c && a > b) || (b == c && a > b))
		{
			largest = a;
		}
		else if ((a == c && a < b) || (b == c && a < b))
		{
			largest = b;
		}
		else
		{
			largest = c;
		}
	}
	return (largest);
}
