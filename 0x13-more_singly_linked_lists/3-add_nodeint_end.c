#include "lists.h"

/**
 * add_nodeint_end - add node at end
 * @head:LinkedList
 * @n:integer
 * Return:the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *p = *head;

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
		if (!p)
		{
			*head = newNode;
			return (newNode);
		}
		else
		{
			while (p->next != NULL)
				p = p->next;
			p->next = newNode;
			return (newNode);
		}
	free(newNode);
	return (NULL);
}
