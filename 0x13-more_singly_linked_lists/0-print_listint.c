#inlclude "lists.h"

/**
 *print_listint -  prints all the elements of a listint_t list.
 *@h: a pointer to the head of the list
 *
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	while (h->next)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
