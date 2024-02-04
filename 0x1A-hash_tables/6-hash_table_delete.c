#include "hash_tables.h"


void free_list(hash_node_t *node)
{
	if (node)
	{
		free_list(node->next);
		if (node->key)
			free(node->key);
		if (node->value)
			free(node->value);
		free(node);
	}
}

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht)
	{
		if (ht->array)
		{
			for (i = 0; i < ht->size; i++)
			{
				if (ht->array[i])
					free_list(ht->array[i]);
			}
			free(ht->array);
		}
		free(ht);
	}

}
