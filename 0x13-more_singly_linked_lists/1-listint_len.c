#include "lists.h"

/**
 *listint_len -  returns the number of elements of a listint_t list.
 *@h: a pointer to the head of the list
 *
 *Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	if (h)
		return (1 + listint_len(h->next));
	return (0);
}
