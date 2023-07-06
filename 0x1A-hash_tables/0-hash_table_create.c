#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array
 * Return: Returns a pointer to the newly created hash table, otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashing = malloc(sizeof(hash_table_t));

	if (!hashing)
		return (NULL);
	hashing->size = size;
	/*hashing->array = malloc(sizeof(hash_node_t) * size);
	if (!hashing->array)
		return (NULL);*/
	return (hashing);
}
