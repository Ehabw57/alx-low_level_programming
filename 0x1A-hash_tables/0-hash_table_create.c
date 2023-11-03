#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table
 * @size: Size of nodes in the hash table (capacty)
 * Return: Pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int index = 0;

	hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;

	hash_table->array = (hash_node_t **)malloc(sizeof(hash_node_t) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (index = 0; index < size; index--)
		(hash_table->array)[index] = NULL;

	return (hash_table);
}
