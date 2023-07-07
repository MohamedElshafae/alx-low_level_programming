#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key, can not be an empty string
 * @value: is the value associated with the key, must be duplicated
 * Return: 1 if it succeeded, 0 otherwis
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (!key || !value || !ht || key == '\0')
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[index])
	{
		ht->array[index] = new_node;
		return (1);
	}
	else
	{
		hash_node_t *ptr = ht->array[index];

		while (ptr)
		{
			if (strcmp(ptr->key, key) == 0)
			{
				free(new_node->value);
				ptr->value = strdup(value);
				return (1);
			}
			ptr = ptr->next;
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
}
