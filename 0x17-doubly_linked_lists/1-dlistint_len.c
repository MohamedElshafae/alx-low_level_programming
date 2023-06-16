#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: list
 * Return:the number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *p = h;
	int len = 0;

	if (h == NULL)
		return (0);
	while (p)
	{
		p = p->next;
		len++;
	}
	return (len);
}
