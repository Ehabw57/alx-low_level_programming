#include "lists.h"
/**
 * print_list - illrate thorug each node of the list and prints it out
 * @h: a pointer to list_t node
 * Return: the number of nodes printed
*/
size_t print_list(const list_t *h)
{
	unsigned int n = 0;
	const list_t *move;

	move = h;
	while (move != NULL)
	{
		if (move->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", move->len, move->str);
		move = move->next;
		n++;
	}
	return (n);
}
