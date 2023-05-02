#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of the list
 * @idx: position of new node
 * @n: number stored in the new node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *p = *head;
	unsigned int i = 0;

	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (!*head && idx == 0)
	{
		*head = newNode;
		return (newNode);
	}
	while (p)
	{
		if (i == idx)
			break;
		i++;
		p = p->next;
	}
	newNode->next = p->next;
	p->next = newNode;
	return (newNode);
}
