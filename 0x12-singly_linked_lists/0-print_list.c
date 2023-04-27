#include "lists.h"
#include <string.h>

/**
 * print_list - print linkedList
 * @h:the List
 * Return:length
 */
size_t print_list(const list_t *h)
{
	const struct list_s *p;
	size_t len = 0;

	p = h;
	while (p != NULL)
	{
		if (p->str != NULL)
			printf("[%d] %s\n", (int)strlen(p->str), p->str);
		else
			printf("[0] (nil)\n");
		p = p->next;
		len++;
	}
	return (len);
}
