#include "lists.h"

/**
 *add_node_end - adds a new node at the end of a list_t list.
 *@head: the head of the list_t list
 *@str: the value of head->str
 *
 *Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *node = malloc(sizeof(list_t));

	temp = *head;
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = node;
	}
	else
		*head = node;

	return (node);
}
