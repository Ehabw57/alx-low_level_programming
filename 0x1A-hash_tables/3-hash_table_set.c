#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = 0;
	hash_node_t *node = NULL;


	index = key_index(key, ht->size);

	if ((ht->array)[index] == NULL)
	{
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (0);
		node->next = NULL;
	}
	else
	{
		
		node =  malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (0);
		node->next = (ht->array)[index];
	}

	(ht->array)[index] = node;
	node->key = strdup(key);
	node->value = strdup(value);
	return (1);



}

