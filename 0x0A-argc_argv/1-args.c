#include <stdio.h>
#include "main.h"

/**
 * main -> prints num of arg passed into this
 *@argc: num
 *@argv: arr
 *Return: 0 Success
 */

int main(int argc, char *argv[])
{


	(void) argv;

	printf("%d\n", argc - 1);
	return (0);

}
