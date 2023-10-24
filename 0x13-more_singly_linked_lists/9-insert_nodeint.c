#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position.
 *@head: pointer to the head of the list
 *@idx: the index of the list where the new node should be added
 *@n: value to be inserted
 *
 *Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp;
	unsigned int i;

	temp = *head;
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	for (i = 0; temp->next && i < idx - 1; i++)
		temp = temp->next;

	if (i != idx - 1)
		return (NULL);

	node->n = n;
	node->next = temp->next;
	temp->next = node;

	return (node);
}
