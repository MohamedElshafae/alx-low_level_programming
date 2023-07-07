#include "hash_tables.h"

/**
 * key_index -  gives you the index of a key.
 * @key:is the key
 * @size: is the size of the array of the hash table
 * Return:index at which key pair should be stored in array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed_key = hash_djb2(key);

	hashed_key %= size;
	return (hashed_key);
}
