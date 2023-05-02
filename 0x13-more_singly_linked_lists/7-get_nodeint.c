#include "lists.h"

/**
 * get_nodeint_at_index - get the nth index node
 * @head: head of the list
 * @index: index of the node
 * Return: node at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p = head;

	while (p)
	{
		if (i == index)
			return (p);
		i++;
		p = p->next;
	}
	return (NULL);
}
