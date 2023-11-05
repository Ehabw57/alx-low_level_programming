#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - Deletes a hash table
 * @ht: Hash table to delete
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *Free = NULL, *move = NULL;
	unsigned long int index = 0;

	for (; ht != NULL && index < ht->size; index++)
	{
		move = Free = (ht->array)[index];
		while (move != NULL)
		{
			move = move->next;
			free(Free->key);
			free(Free->value);
			free(Free);
			Free = move;
		}
	}
	free(ht->array);
	free(ht);
}
