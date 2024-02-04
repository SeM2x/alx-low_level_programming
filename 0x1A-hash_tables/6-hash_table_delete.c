#include "hash_tables.h"


void free_node(hash_node_t node)
{
	if (node)
	{
		free_node(node->next);
		free(node);
	}
}

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			free_node(node);
		}
	}
}
