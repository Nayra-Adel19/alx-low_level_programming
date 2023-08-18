#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - To print argc & argv
 *@argc: Args
 *@argv: Args
 *Return: Always (0)
 */

int main(int argc, char **argv)
{

	char *x = (char *)main;
	int z;

	if (argc != 2)
	{

		printf("Error\n"), exit(1);

	}	z = atoi(argv[1]);

	if (z < 0)
	{

		printf("Error\n"), exit(2);

	}

	while (z--)
	{

		printf("%02hhx%s", *x++, z ? " " :  "\n");

	}	return (0);

}
