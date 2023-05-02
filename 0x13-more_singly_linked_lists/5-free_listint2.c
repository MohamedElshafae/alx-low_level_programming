#include "lists.h"

/**
 * free_listint2 - delete a linked list
 * @head: head ofthe linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *p = *head;

	if (head == NULL)
		return;
	while (*head)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
	*head = NULL;
}
