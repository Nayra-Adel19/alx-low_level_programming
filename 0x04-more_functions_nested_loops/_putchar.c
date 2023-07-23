#include "main.h"
#include <unistd.h>

/**
 * _putchar -> writes the character
 *@c: The char
 *Return: On Successful (1) On ERROR (-1)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
