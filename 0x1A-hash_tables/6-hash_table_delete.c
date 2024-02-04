#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			free(ht->array[i]);
		}
	}
}
