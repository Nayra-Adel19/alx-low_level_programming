#include "main.h"

/**
 * _strcpy - A function to copy the str
 *@dest: pointer
 *@src: str
 *Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{

	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
		dest[i] = src[i];


	dest[i] = '\0';
	return (dest);
}
