#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 *
 * Return: Void.
*/
void hash_table_print(const hash_table_t *ht)
{
	long unsigned int i;
	int printed = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while(node)
		{
			if (!printed)
			{
				printf("'%s': '%s'", node->key, node->value);
				printed = 1;
			}
			else	
				printf(", '%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
