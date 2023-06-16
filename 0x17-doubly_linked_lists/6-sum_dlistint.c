#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n).
 * @head: list
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *p = head;

	if (!head)
		return (0);
	while (p->next)
	{
		p = p->next;
		sum += p->n;
	}
	return (sum);
}
