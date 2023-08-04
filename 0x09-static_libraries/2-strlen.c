#include "main.h"

/**
 * _strlen -> length of a str
 *@s: str
 *Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{

		len++;

		s++;


	}	return (len);


}
