#include "lists.h"

/**
 *sum_listint - returns the sum of all the data (n)
 *of a listint_t linked list.
 *@head: a pointer to the head of the list
 *
 *Return: sum of all the data.
 */
int sum_listint(listint_t *head)
{
	if (head)
		return (head->n + sum_listint(head->next));
	return (0);
}
