#include "lists.h"

/**
 *add_nodeint - adds a new node at the beginning of a listint_t list.
 *@head: a pointer to the head of the list
 *@n: the value of the added node
 *
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
