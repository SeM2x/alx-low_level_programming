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

/**
 *free_listint2 - frees a listint_t list and  sets the head to NULL.
 *@head: a pointer to the head of the list
 *
 *Return: Void.
 */
void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
