#include "lists.h"
#include <string.h>

/**
 * list_len - print length
 * @h:the List
 * Return:length
 */
size_t list_len(const list_t *h)
{
	const struct list_s *p;
	size_t len = 0;

	p = h;
	while (p != NULL)
	{
		p = p->next;
		len++;
	}
	printf("-> %d elements\n", (int)len);
	return (len);
}
