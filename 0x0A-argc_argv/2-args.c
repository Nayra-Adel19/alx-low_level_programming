#include <stdio.h>
#include "main.h"

/**
 * main -> prints all arg it receives
 *@argc: num
 *@argv: arr
 *Return: 0 Success
 */

int main(int argc, char *argv[])
{

	int b;

	for (b = 0; b < argc; b++)
	{
		printf("%s\n", argv[b]);
	}	return (0);


}
