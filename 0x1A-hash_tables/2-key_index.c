#include "hash_tables.h"

/**
 * key_index - func gives you index of key
 *@key: Hash Table
 *@size: Hash Table
 *Return: the indexx
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int key_ind = hash_djb2(key) % size;

	return (key_ind);
}
