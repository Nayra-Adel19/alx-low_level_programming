#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name -> void That prints a name
 *@name: name char
 *@f: func
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{

	if (name && f)
	{

		f(name);

	}

}
