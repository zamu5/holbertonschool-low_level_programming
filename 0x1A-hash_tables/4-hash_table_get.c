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

	idx = key_index((unsigned char *)key, (*ht).size);

	if (!ht || !key || strlen(key) == 0)
		return (NULL);
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
