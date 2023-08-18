#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - void to give as a parameter
 *@array: Array
 *@size: size
 *@action: Action
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	int *end = array + size - 1;

	if (array && size  && action)
	{

		while (array <= end)
		{

			action(*array++);

		}

	}

}
