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
	hash_node_t *new;
	unsigned long int idx;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);
	idx = key_index((unsigned char *)key, 1024);
	new = (*ht).array[idx];
	if (new)
	{
		while (new && strcmp((*new).key, key) != 0)
			new = (*new).next;
		if (new && strcmp((*new).key, key) == 0)
		{
			free((*new).value);
			(*new).value = strdup(value);
			if (!(*new).value)
				return (0);
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	(*new).key = strdup(key);
	if (!(*new).key)
	{
		free(new);
		return (0);
	}
	(*new).value = strdup(value);
	if (!(*new).value)
	{
		free(new);
		free((*new).key);
		return (0);
	}
	(*new).next = (*ht).array[idx];
	(*ht).array[idx] = new;
	return (1);
}
