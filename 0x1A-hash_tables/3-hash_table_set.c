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
	hash_node_t *new, *old;
	char *k, *v;

	if (!ht || !key || !value || key[0] == '\0')
		return (0);
	k = strdup(key);
	v = strdup(value);
	if (!k || !v)
		return (0);
	idx = key_index((unsigned char *)key, 1024);
	if (!(*ht).array[idx])
	{
		new  = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		(*new).key = strdup(key);
		(*new).value = strdup(value);
		(*new).next = (*ht).array[idx] ;
	}
	else
	{
		new = (*ht).array[idx];
		while (new && strcmp((*new).key, key) != 0)
			new = (*new).next;
		if (strcmp((*new).key, key) == 0)
		{
			free((*new).value);
			(*new).value = strdup(value);
			return (1);
		}
		old = new;
		new  = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		(*new).key = strdup(key);
		(*new).value = strdup(value);
		(*new).next = old;
	}
	(*ht).array[idx] = new;
	return (1);
}
