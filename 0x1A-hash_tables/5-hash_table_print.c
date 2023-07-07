#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht:hash table
 * Return:void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned int i;
	int flag = 0;

	if (!ht)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;
		else
		{
			ptr = ht->array[i];
			while (ptr)
			{
				if (flag)
					printf(", ");
				printf("'%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->next;
				flag = 1;
			}
		}
	}
	printf("}\n");
}
