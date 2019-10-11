#include "hash_tables.h"
/**
 * hash_table_delete - delete a hashtable
 * @ht: hashtable
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *del, *next;

	for (; idx < (*ht).size; idx++)
	{
		del = (*ht).array[idx];
		while (del)
		{
			next = (*del).next;
			free((*del).key);
			free((*del).value);
			free(del);
			del = next;
		}
	}
	free((*ht).array);
	free(ht);
}
