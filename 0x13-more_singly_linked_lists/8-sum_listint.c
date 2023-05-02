#include "lists.h"

/**
 * sum_listint - sum of the list
 * @head: head of the list
 * Return: sum of the list
 */
int sum_listint(listint_t *head)
{

	int i = 0, sum = 0;
	listint_t *p = head;

	if (!head)
		return (0);
	while (p)
	{
		i++;
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
