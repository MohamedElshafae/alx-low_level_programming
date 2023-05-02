#include "lists.h"

/**
 * free_listint - delete the list fron the heap
 * @head: head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *p = head;

	while (p)
	{
		head = head->next;
		free(p);
		p = head;
	}
}
