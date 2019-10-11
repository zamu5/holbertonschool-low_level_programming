#include "hash_tables.h"
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	int flag = 0;

	putchar('{');
	for (; idx <= (*ht).size; idx++)
	{
		if((*ht).array[idx])
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", (*(*ht).array[idx]).key, (*(*ht).array[idx]).value);
			flag = 1;
		}
	}
	printf("}\n");
}
