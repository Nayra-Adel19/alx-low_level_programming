#include "hash_tables.h"

/**
 * shash_table_create - func create Hash Table
 *@size: size hash table
 *Return: Depend
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ntable;
	unsigned long int bz;

	ntable = malloc(sizeof(shash_table_t));

	if (ntable == NULL)
	{
		return (NULL);
	}

	ntable->size = size;
	ntable->shead = NULL;
	ntable->stail = NULL;
	ntable->array = malloc(sizeof(shash_node_t) * size);

	if (ntable->array == NULL)
	{
		free(ntable);
		return (NULL);
	}

	for (bz = 0; bz < size; bz++)
	{
		ntable->array[bz] = NULL;
	}
	return (ntable);
}

/**
 * make_shash_node - func create Hash Table
 *@key: hash table
 *@value: hash table
 *Return: Condition
 */

shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *znode;

	znode = malloc(sizeof(shash_node_t));

	if (znode == NULL)
	{
		return (NULL);
	}	znode->key = strdup(key);

	if (znode->key == NULL)
	{
		free(znode);
		return (NULL);
	}
	znode->value = strdup(value);

	if (znode->value == NULL)
	{
		free(znode->key);
		free(znode);
		return (NULL);
	}
	znode->next = znode->snext = znode->sprev = NULL;
	return (znode);
}

/**
 * add_to_sorted_list - func create Hash Table
 *@table: hash table
 *@node: hash table
 *Return: Condition
 */

void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *xnext;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	xnext = table->shead;
	while (xnext != NULL)
	{
		if (strcmp(node->key, xnext->key) < 0)
		{
			node->snext = xnext;
			node->sprev = xnext->sprev;
			xnext->sprev = node;

			if (node->sprev != NULL)
			{
				node->sprev->snext = node;
			}
			else
			{
				table->shead = node;
			}
			return;
		}		xnext = xnext->snext;
	}	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_set - key value in hash table
 *@ht: hash table
 *@key: hash table
 *@value: hash table
 *Return: Condition
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int zb;
	char *newv;
	shash_node_t *node, *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	zb = key_index((const unsigned char *)key, ht->size);
	next = ht->array[zb];

	while (next != NULL)
	{
		if (strcmp(next->key, key) == 0)
		{
			newv = strdup(value);
			if (newv == NULL)
			{
				return (0);
			}
			free(next->value);
			next->value = newv;
			return (1);
		}
		next = next->next;
	}
	node = make_shash_node(key, value);
	if (node == NULL)
	{
		return (0);
	}
	node->next = ht->array[zb];
	ht->array[zb] = node;
	add_to_sorted_list(ht, node);
	return (1);
}

/**
 * shash_table_get - value hash table
 *@ht: hash table
 *@key: hash table
 *Return: Condition
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int zb;
	shash_node_t *zn;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}

	zb = key_index((const unsigned char *)key, ht->size);
	zn = ht->array[zb];

	while (zn != NULL)
	{

		if (strcmp(zn->key, key) == 0)
		{
			return (zn->value);
		}
		zn = zn->next;
	}
	return (NULL);
}

/**
 * shash_table_print - sort hash table
 *@ht: Hash table
 *Return: Condition
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	printf("{");
	tp = ht->shead;

	while (tp != NULL)
	{
		if (flag == 1)
		{
			printf(", ");
		}

		printf("'%s': '%s'", tp->key, tp->value);
		flag = 1;
		tp = tp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - sort hash table in reverse
 *@ht: Hash table
 *Return: Condition
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nxt;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	printf("{");
	nxt = ht->stail;

	while (nxt != NULL)
	{
		if (flag == 1)
		{
			printf(", ");
		}

		printf("'%s': '%s'", nxt->key, nxt->value);
		flag = 1;
		nxt = nxt->sprev;
	}
	printf("}\n");

}

/**
 * shash_table_delete - delete sort hash table
 *@ht: hash table
 *Return: Condition
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int zb;
	shash_node_t *nextn;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
	{
		return;
	}

	for (zb = 0; zb < ht->size; zb++)
	{
		while (ht->array[zb] != NULL)
		{
			nextn = ht->array[zb]->next;
			free(ht->array[zb]->key);
			free(ht->array[zb]->value);
			free(ht->array[zb]);
			ht->array[zb] = nextn;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
