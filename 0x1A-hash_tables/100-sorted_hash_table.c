#include "hash_tables.h"

void insert_sorted_linkedlist(shash_table_t *ht, shash_node_t *new_node);
/**
 * shash_table_create - creates a hash table.
 * @size: size of the array
 * Return: Returns a pointer to the newly created hash table, otherwise NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shashing;

	shashing = malloc(sizeof(shash_table_t));
	if (!shashing)
		return (NULL);
	shashing->array = malloc(sizeof(shash_node_t *) * size);
	if (!shashing->array)
	{
		free(shashing);
		return (NULL);
	}
	shashing->size = size;
	shashing->shead = shashing->stail = NULL;
	return (shashing);
}
/**
 * create_node - create a new node
 * @key: key of the new node
 * @value: value of the new node
 * Return: new node or NULL
 */
shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *node = (shash_node_t *)malloc(sizeof(shash_node_t));

	if (!node)
		return (NULL);
	node->key = strdup(key);
	if (!(node->key))
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (!(node->value))
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

/**
 * shash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key, can not be an empty string
 * @value: is the value associated with the key, must be duplicated
 * Return: 1 if it succeeded, 0 otherwis
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *cur_node;
	int index;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	cur_node = ht->array[index];
	while (cur_node)
	{
		if (strcmp(cur_node->key, key) == 0)
		{
			free(cur_node->value);
			cur_node->value = strdup(value);
			return (1);
		}
		cur_node = cur_node->next;
	}
	node = create_node(key, value);
	if (!node)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
	insert_sorted_linkedlist(ht, node);
	return (1);
}

/**
 * insert_sorted_linkedlist - insert node in sort
 * @ht: hash table
 * @new_node:...
 */
void insert_sorted_linkedlist(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *ptr;

	if (!ht->shead && !ht->stail)
	{
		ht->shead = ht->stail = new_node;
		new_node->snext = new_node->sprev = NULL;
		return;
	}
	else if (strcmp(new_node->key, ht->shead->key) < 0)
	{
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
		new_node->sprev = NULL;
		return;
	}

	ptr = ht->shead;
	while (ptr->next)
	{
		if (strcmp(new_node->key, ht->shead->key) < 0)
		{
			new_node->snext = ptr;
			ptr->sprev->snext = new_node;
			new_node->sprev = ptr->sprev;
			ptr->sprev = new_node;
			return;
		}
		ptr = ptr->snext;
	}
	ht->stail->snext = new_node;
	new_node->sprev = ht->stail;
	ht->stail = new_node;
	ht->stail->snext = NULL;
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht:is the hash table you want to look into
 * @key:is the key you are looking for
 * Return:value associated with the element, or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *ptr;
	unsigned long int index;

	if (!key || !ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr)
	{
		if (strcmp(key, ptr->key) == 0)
			return (ptr->value);
		ptr = ptr->snext;
	}
	return (NULL);
}

/**
 * shash_table_print - prints sorted hash table.
 * @ht:hash table
 * Return:void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ptr;
	int flag;

	if (!ht)
		return;
	ptr = ht->shead;
	flag = 0;

	putchar('{');
	while (ptr)
	{
		if (flag)
			printf(", ");
		printf("'%s': '%s'", ptr->key, ptr->value);
		ptr = ptr->snext;
		flag = 1;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints sorted hash table in revers order.
 * @ht:hash table
 * Return:void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ptr;
	int flag;

	if (!ht)
		return;
	ptr = ht->stail;
	flag = 0;

	putchar('{');
	while (ptr)
	{
		if (flag)
			printf(", ");
		printf("'%s': '%s'", ptr->key, ptr->value);
		ptr = ptr->sprev;
		flag = 1;
	}
	printf("}\n");
}
/**
 * shash_table_delete - delete hash table
 * @ht:hash table
 * Return:void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *cur, *next;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
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
