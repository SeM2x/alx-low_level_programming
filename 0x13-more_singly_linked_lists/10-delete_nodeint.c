#include "lists.h"

/**
 *delete_nodeint_at_index - t deletes the node at index index
 *of a listint_t linked list.
 *@head: pointer to the head of the list
 *@index: the index of the node that should be deleted.
 *
 *Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *temp;
	int i;

	node = *head;
	if (node == NULL)
		return (-1);
	if (i == 0)
		*
		head = node->next;

	for (i = 0; node->next && i < index - 1; i++)
		node = node->next;

	if (!node->next)
		return (-1);

	temp = node->next;
	node->next = temp->next;
	free(temp);

	return (1);
}
