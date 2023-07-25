#include "main.h"

/**
 * swap_int - swap int
 *@a: int
 *@b: int
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
