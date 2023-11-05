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
	unsigned long int index = 0;
	int printed = 0;

	putchar('{');
	for (; ht != NULL && index < ht->size; index++)
	{
		move = (ht->array)[index];
		for (print = move; print != NULL; print = print->next)
		{
			if (printed == 0)
			{
				printf("\'%s\': \'%s\'", print->key, print->value);
				printed += 1;
				continue;
			}
			printf(", \'%s\': \'%s\'", print->key, print->value);
		}
	}
	printf("}\n");
}
