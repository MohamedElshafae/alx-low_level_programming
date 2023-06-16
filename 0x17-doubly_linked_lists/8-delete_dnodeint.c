#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a specific node at given index
 * @head: pointer to the head of the node
 * @index: index of the node that will be deleted
 * Return: 1 on success -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur = *head;
	unsigned int i;

	for (i = 0; i < index && cur; i++)
		cur = cur->next;
	if (!cur)
		return (-1);
	if (cur == *head)
	{
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		free(cur);
		return (1);
	}
	if (!cur->next)
	{
		cur->prev->next = NULL;
		free(cur);
		return (1);
	}
	cur->next->prev = cur->prev;
	cur->prev->next = cur->next;
	free(cur);
	return (1);
}
