#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenate all arg of program
 *@ac: Arg
 *@av: A Pointer
 *Return: NULL -> (ac == 0) or (av == null),
 *Pointer -> new str (NULL on fail)
 */

char *argstostr(int ac, char **av)
{
	int x, y, b, size;
	char *arg;

	size = 0;
	b = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}	x = 0;
	while (x < ac)
	{
		y = 0;
		while (av[x][y])
		{
			size++;
			y++;
		}		size++;
		x++;
	}	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
	{
		return (NULL);
	}	x = 0;
	while (x < ac)
	{
		y = 0;
		while (av[x][y])
		{
			arg[b] = av[x][y];
			y++;
			b++;

		}		arg[b] = '\n';
		b++;
		x++;

	}	arg[b] = '\0';
	return (arg);
}
