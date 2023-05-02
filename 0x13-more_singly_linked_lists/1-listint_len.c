#include "lists.h"
#include <string.h>

/**
 * listint_len - print length
 * @h:the List
 * Return:length
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *p;
	size_t len = 0;

	p = h;
	while (p != NULL)
	{
		p = p->next;
		len++;
	}
	return (len);
}
