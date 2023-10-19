#include "lists.h"

/**
 *list_len - returns the number on element in a list.
 *@h: the list_t list
 *
 *Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	if (h != NULL)
		return (list_len(h->next) + 1);
	return (0);
}
