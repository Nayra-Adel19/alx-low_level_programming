#include "main.h"

/**
 * _strncat - concatenates n bytes from a str to another
 *@dest: destination str
 *@src: source str
 *@n: number of bytes of str to concatenate
 *Return: a pointer to the resulting str dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{

		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
