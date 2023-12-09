#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: a pointer to the head of the list
 *
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *head = h;
	int count = 0;

	while (head)
	{
		printf("%d", head->n);
		head = head->next;
		count ++;
	}

	return (count);
}
