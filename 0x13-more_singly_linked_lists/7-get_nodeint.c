#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *@head: a pointer to the head of the list
 *@index: index of node
 *
 *Return: node indexed by index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; head->next && i < index; i++)
		head = head->next;

	if (i == index)
		return (head);

	return (NULL);
}
