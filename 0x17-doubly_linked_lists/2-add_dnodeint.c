#include "lists.h"

/**
 * add_dnodeint - add node at beginning
 * @head: list
 * @n:number that add in list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	temp->n = n;
	if (!temp)
		return (NULL);
	if (!*head)
	{
		*head = temp;
		return (temp);
	}
	temp->next = *head;
	*head = temp;
	return (temp);
}
