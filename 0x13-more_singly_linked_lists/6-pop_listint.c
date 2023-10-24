#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linked list.
 *@head: a pointer to the head of the list
 *
 *Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int val;

	node = *head;
	*head = node->next;
	if (*head == NULL)
		return (0);
	val = node->n;
	free(node);
	return (val);
}
