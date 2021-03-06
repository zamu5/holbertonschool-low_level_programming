#include "hash_tables.h"
/**
 * hash_table_get - look for the value of a specific key
 * @ht: hashtable
 * @key: key
 * Return: value of the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *check;

	if (!ht || !key)
		return (NULL);

	idx = key_index((unsigned char *)key, (*ht).size);
	check = (*ht).array[idx];
	if (check)
	{
		while (check && strcmp((*check).key, key) != 0)
			check = (*check).next;
		if (check)
			return ((*check).value);
	}
	return (NULL);
}
