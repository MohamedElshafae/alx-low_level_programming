#include "lists.h"

/**
 * print_dlistint - print the list
 * @h: list
 * Return:the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *p = h;
	int len = 0;

	if (h == NULL)
		return (0);
	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
		len++;
	}
	return (len);
}
