#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: Hash table to look into.
 * @key: Key to be looking for.
 * Return: The value associated with the key or NULL if somthing went wrong.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *move = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);
	/*Find index to search in for key*/
	index = key_index((const unsigned char *)key, ht->size);
	/*loop in that index*/
	for (move = (ht->array)[index]; move != NULL; move = move->next)
	{
		if (strcmp(key, move->key) == 0)
			return (move->value); /*key found and value returnd*/
	}

	return (NULL); /*Either key not found or index is NULL*/
}
