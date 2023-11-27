#include "hash_tables.h"

/**
 * hash_table_set - func that adds hash table
 *@ht: Hash Table
 *@key: Hash Table
 *@value: Hash Table
 *Return: (1)-> succee (0)-> no
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *nnode = NULL, *tp = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tp = ht->array[index];

	while (tp != NULL)
	{
		if (strcmp(tp->key, key) == 0)
		{
			free(tp->value);
			tp->value = strdup(value);
			if (tp->value == NULL)
				return (0);
			return (1);
		}		tp = tp->next;
	}	nnode = malloc(sizeof(hash_node_t));

	if (nnode == NULL)
		return (0);
	nnode->key = strdup(key);
	nnode->value = strdup(value);

	if (nnode->key == NULL || nnode->value == NULL)
	{
		free(nnode->key);
		free(nnode->value);
		free(nnode);
		return (0);
	}	nnode->next = ht->array[index];
	ht->array[index] = nnode;
	return (1);
}
