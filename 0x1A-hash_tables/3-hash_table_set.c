#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - Inserts a new value to the hash table
 * @ht: The main hash table
 * @key: The of the value
 * @value: The value of the key
 * Return: 1 if SUCCESS or 0 if somthing went wrong
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = 0;
	hash_node_t *node = NULL;

	if (ht == NULL || key == NULL || !strlen(key))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	/*Start searching for key in the table*/
	for (node = (ht->array)[index]; node != NULL; node = node->next)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
				return (0); /*Faild to duplicate value*/
			return (1);		/*Key found and value updated*/
		}
	}

	/*Either key not found or index got no collision */
	node = (hash_node_t *)malloc(sizeof(hash_node_t)); /*New node allocated*/
	if (node == NULL)
		return (0); /*Could not allocate new node*/

	/*Store the value and key*/
	node->key = strdup(key);
	node->value = strdup(value);
	if (node->value == NULL || node->key == NULL)
	{
		free(node->value);
		free(node->key);
		free(node);
		return (0); /*Could not duplicate key or value*/
	}
	/*Stack the new node*/
	node->next = (ht->array)[index];
	(ht->array)[index] = node;

	return (1);
}
