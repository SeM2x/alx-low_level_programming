#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: a pointer or NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **n_tab;
	hash_table_t *h_tab;

	if (size <= 0)
		return (NULL);
	n_tab = malloc(size * sizeof(hash_node_t));
	if (n_tab == NULL)
		return (NULL);
	h_tab = malloc(sizeof(hash_node_t) + sizeof(int));
	if (h_tab == NULL)
		return (NULL);

	h_tab->size = size;
	h_tab->array = n_tab;

	return (h_tab);
}
