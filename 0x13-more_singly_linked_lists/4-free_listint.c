#include "lists.h"

/**
 *free_listint - frees a listint_t list.
 *@head: a pointer to the head of the list
 *
 *Return: Void.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	if (head->next)
		free_listint(head->next);

	free(head);
}
