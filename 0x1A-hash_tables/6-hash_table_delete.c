#include "hash_tables.h"

/**
 * free_list - frees a linked list.
 * @node: the head of the list
*/
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

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
*/
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
