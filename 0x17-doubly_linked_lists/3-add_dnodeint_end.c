#include "lists.h"

/**
 * add_dnodeint_end - add node at end
 * @head: list
 * @n:the number that add in the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *p = *head;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	if (!*head)
	{
		*head = temp;
		return (temp);
	}
	while (p->next)
		p = p->next;
	p->next = temp;
	temp->prev = p;
	return (temp);
}
