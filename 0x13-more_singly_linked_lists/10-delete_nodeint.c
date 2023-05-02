#include "lists.h"

/**
 * delete_nodeint_at_index - inserts a new node at a given position.
 * @head: head of the list
 * @index: position of  node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head;
	listint_t *temp;

	unsigned int i = 0;

	if (!*head || !head)
		return (-1);
	if (index == 0)
	{
		*head  = (*head)->next;
		free(p);
		return (1);
	}
	while (p)
	{
		if (i == index - 1)
			break;
		i++;
		p = p->next;
	}
	if (i > index)
		return (-1);

	temp = p->next;
	p->next = temp->next;
	free(temp);
	return (1);
}
