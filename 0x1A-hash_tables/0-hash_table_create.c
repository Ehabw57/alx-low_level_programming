#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table
 * @size: Size of nodes in the hash table (capacty)
 * Return: Pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_node_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->array = malloc(sizeof(hash_node_t) * size);
	if (hash_table->array == NULL)
		return (NULL);

	return (hash_table);
}
