#include "hash_tables.h"

/**
 * hash_table_print - func prints hash table
 *@ht: Hash Table
 *Return: Condition
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int zb = 0;
	hash_node_t *tp = NULL;
	int flag = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");

	for (zb = 0; zb < ht->size; zb++)
	{
		tp = ht->array[zb];

		while (tp != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", tp->key, tp->value);
			flag = 1;
			tp = tp->next;
		}
	}
	printf("}\n");
}
