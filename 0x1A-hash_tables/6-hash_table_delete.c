#include "hash_tables.h"

/**
 * hash_table_delete - that deletes a hash table.
 * @ht:hash table
 * Return:void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cur, *next;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			cur = ht->array[i];
			while (cur)
			{
				next = cur->next;
				free(cur->key);
				free(cur->value);
				free(cur);
				cur = next;
			}
		}
	}
	free(ht->array);
	free(ht);
}
