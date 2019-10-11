#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: the size of the array
 * Return: A pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	(*new).size = size;
	(*new).array = malloc(sizeof(hash_node_t *) * (*new).size);
	if (!(*new).array)
		return (NULL);
	return (new);
}
