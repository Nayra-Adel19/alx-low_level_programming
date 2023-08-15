#include <stdlib.h>
#include "dog.h"

/**
 * _strlen -> length of str
 *@str: str
 *Return: lenth
 */

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
	{

		length++;

	}	return (length);

}

/**
 * _strcopy -> dest & a copy of a str -> src
 *@src: Str
 *@dest: Copy str
 *Return: dest
 */

char *_strcopy(char *dest, char *src)
{

	int b;

	for (b = 0; src[b]; b++)
	{

		dest[b] = src[b];

	}	dest[b] = '\0';

	return (dest);
}

/**
 * new_dog -> a new dog
 *@name: a Name
 *@age: an Age
 *@owner: the owner
 *Return: NULL -> fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
	{
		return (NULL);

	}	dog = (dog_t *) malloc(sizeof(dog_t));

	if (dog == NULL)

		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);

	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);

	}	dog->name = _strcopy(dog->name, name);

	dog->age = age;

	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
