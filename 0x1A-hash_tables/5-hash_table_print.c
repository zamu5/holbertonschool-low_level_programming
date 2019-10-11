#include "hash_tables.h"
/**
 * hash_table_print - print a hashtable
 * @ht: hashtable
 * Return - nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	int flag = 0;
	hash_node_t *print;

	if (!ht)
		return;
	putchar('{');
	for (; idx <= (*ht).size; idx++)
	{
		print = (*ht).array[idx];
		if (print)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", (*print).key, (*print).value);
			flag = 1;
			while ((*print).next)
			{
				print = (*print).next;
				if (flag)
					printf(", ");
				printf("'%s': '%s'", (*print).key, (*print).value);
			}
		}
	}
	printf("}\n");
}
