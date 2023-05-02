#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint - add node between Nodes
 * @head:LinkedList
 * @n:integer
 * Return:the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode || !head)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
