#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - Inserts a new value to the hash table
 * @ht: The main hash table
 * @key: The of the value
 * @value: The value of the key
 * Return: 1 if SUCCESS or 0 if FAILS
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = 0;
	hash_node_t *node = NULL, *move = NULL;

	if (ht == NULL || key == NULL || !strlen(key))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	if ((ht->array)[index] == NULL)
		node->next = NULL;
	else
	{
		for (move = (ht->array)[index]; move != NULL; move = move->next)
		{
			if (strcmp(key, move->key))
			{
				free(move->value);
				free(node);
				move->value = strdup(value);
				return (1);
			}
		}
		node->next = (ht->array)[index];
	}

	(ht->array)[index] = node;
	node->key = strdup(key);
	node->value = strdup(value);
	return (1);
}
