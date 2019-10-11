#include "hash_tables.h"
/**
 * hash_table_set - createa new node at the table
 * @ht: hashtable
 * @key: key
 * @value: value
 * Return: 1 in succes 0 in faik
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;

	idx = key_index(key, 1024);
	(*ht).array[idx] = malloc(hash_node_t);
	if ((*ht).array[idx] == NULL)
		return (0);
	(*(*ht).array[idx]).key = key;
	(*(*ht).array[idx]).value = value;
	return (1);
}
