#include "hash_tables.h"

/**
 * hash_table_delete - function deletes hash table
 *@ht: Hash Table
 *Return: Condition
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int zb = 0;
	hash_node_t *tp = NULL, *tp2 = NULL;

	if (ht == NULL)
	{
		return;
	}
	for (zb = 0; zb < ht->size; zb++)
	{
		tp = ht->array[zb];

		while (tp != NULL)
		{
			tp2 = tp->next;
			free(tp->key);
			free(tp->value);
			free(tp);
			tp = tp2;
		}
	}
	free(ht->array);
	free(ht);
}
