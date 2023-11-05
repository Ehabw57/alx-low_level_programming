#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *move = NULL;
	hash_node_t *print = NULL;
	int flag = 0;
	unsigned long int index = 0;

	putchar('{');
	for (move = (ht->array)[index]; index < ht->size; index++)
	{
		move = (ht->array)[index];
		for (print = move; flag != 1 && print != NULL; print = print->next)
		{
			flag = 1;
			printf("\'%s\': \'%s\'", print->key, print->value);
			break;
		}
		for (print = move; print != NULL; print = print->next)
			printf(", \'%s\': \'%s\'", print->key, print->value);
	}
	printf("}\n");
}
