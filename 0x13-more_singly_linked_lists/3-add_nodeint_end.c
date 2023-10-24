#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the beginning of a listint_t list.
 *@head: a pointer to the head of the list
 *@n: the value of the added node
 *
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	temp = *head;
	if (!temp)
		*
		head = node;
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}

		temp->next = node;
	}

	return (node);
}
