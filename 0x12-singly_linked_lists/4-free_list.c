#include "lists.h"

/**
 * free_list - delete the list fron the heap
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *p = head;

	while (head)
	{
		head = head->next;
		free(p);
		p = head;
	}
}
