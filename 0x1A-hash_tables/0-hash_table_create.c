#include "hash_tables.h"

/**
 *hash_table_create - func creates Hash Table
 *@size: Array
 *Return: pointer -> newly created Hash Table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nhash = NULL;
	unsigned long int bz = 0;

	nhash = malloc(sizeof(hash_table_t));

	if (nhash == NULL)
	{
		return (NULL);
	}	nhash->size = size;
	nhash->array = malloc(sizeof(hash_node_t *) * size);

	if (nhash->array == NULL)
	{
		free(nhash);
		return (NULL);
	}

	for (bz = 0; bz < size; bz++)
	{
		nhash->array[bz] = NULL;
	}	return (nhash);
}
