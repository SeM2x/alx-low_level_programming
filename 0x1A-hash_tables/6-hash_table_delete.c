#include "hash_tables.h"


void free_list(hash_node_t *node)
{
	if (node)
	{
		free_list(node->next);
		free(node->key);
		free(node->value);
		if (node->next)
			free(node->next);
	}
}

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			free_list(ht->array[i]);
		}
	}
}
