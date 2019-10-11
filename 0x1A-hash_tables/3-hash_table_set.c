#include "hash_tables.h"
/**
 * hash_table_set - createa new node at the table
 * @ht: hashtable
 * @key: key
 * @value: value
 * Return: 1 in succes 0 in faik
 */
int hash_table_set(hash_table_t *ht,const char *key,const char *value)
{
	unsigned long int idx;
	hash_node_t *new, *old;

	idx = key_index((unsigned char *)key, 1024);
	new = (*ht).array[idx];
	if (new == NULL)
	{
		new  = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		(*new).key = strdup(key);
		(*new).value = strdup(value);
		(*new).next = NULL;
		(*ht).array[idx] = new;
	}
	else
	{
		old = new;
		new  = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		(*new).key = strdup(key);
		(*new).value = strdup(value);
		(*new).next = old;
		(*ht).array[idx] = new;
	}
	return (1);
}
