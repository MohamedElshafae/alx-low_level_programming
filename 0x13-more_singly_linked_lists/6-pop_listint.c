#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: head of the list
 * Return: head node
 */
int pop_listint(listint_t **head)
{
	listint_t p = *head;
	int temp;

	if (!head)
		return (0);
	*head = (*head)->next;
	temp = p->n;
	free(p);
	return (n);
}
