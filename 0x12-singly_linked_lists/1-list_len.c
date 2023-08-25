#include "lists.h"
/**
 * list_len - caluclates the number or nodes
 * @h: a pointer to list_t node
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int n = 0;
	const list_t *move;

	move = h;
	while (move != NULL)
	{
		move = move->next;
		n++;
	}
	return (n);
}
