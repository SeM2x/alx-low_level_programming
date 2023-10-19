#include "lists.h"

/**
 *print_list - prints all the elements of a list_t list.
 *@h: the list_t list
 *
 *Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	if (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		return (print_list(h->next) + 1);
	}
	return (0);
}
