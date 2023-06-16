#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: list
 * Return:void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head;

	while (cur)
	{
		head = head->next;
		free(cur);
		cur = head;
	}
}
