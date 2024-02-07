#include "search_algos.h"

/**
 * linear_search - array of int
 *@array: arr
 *@size: size_t
 *@value: value int
 *Return: array NULL = -1
 */

int linear_search(int *array, size_t size, int value)
{
	int b;

	if (array == NULL)
		return (-1);

	for (b = 0; b < (int)size; b++)
	{
		printf("Value checked array[%u] = [%d]\n", b, array[b]);

		if (value == array[b])
			return (b);
	}
	return (-1);
}
