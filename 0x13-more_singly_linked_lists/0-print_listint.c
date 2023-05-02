#include "lists.h"
#include <string.h>

/**
 * list_len - print length
 * @h:the List
 * Return:length
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p;
	size_t len = 0;

	p = h;
	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		len++;
	}
	return (len);
}
