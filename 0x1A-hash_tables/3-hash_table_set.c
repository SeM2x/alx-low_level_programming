#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table
 * @key: the key
 * @value: the value
 *
 * Return: 1 on success 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *tmp;
	unsigned int size;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (0);

	size = sizeof(ht) / sizeof(hash_node_t *);
	index = key_index((unsigned char) key, size);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (ht[index])
	{
		tmp = ht[index];
		ht[index] = node;
		node->next = tmp;
	}
	else
		ht[index] = node;

	return (1);
}
