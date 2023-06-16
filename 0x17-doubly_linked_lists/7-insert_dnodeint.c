#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at a specific index
 * @h: pointer to the head of the node
 * @idx: idx in which the node will be inserted
 * @n: data of the node
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur = *h, *new_node = malloc(sizeof(dlistint_t));
	unsigned int i;

	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		free(new_node);
		return (add_dnodeint(h, n));
	}
	for (i = 0; i < idx - 1 && cur; i++)
		cur = cur->next;
	if (!cur)
	{
		free(new_node);
		return (NULL);
	}
	if (!cur->next)
	{
		free(new_node);
		return (add_dnodeint_end(h, n));
	}
	new_node->next = cur->next;
	cur->next = new_node;
	new_node->next->prev = new_node;
	new_node->prev = cur;
	return (new_node);
}
