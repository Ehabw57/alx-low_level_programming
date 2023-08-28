#include "lists.h"
/**
 * listint_len - a function that returns the number of nodes in the linked list
 * @h: the head of the list
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *move;
	unsigned int i;

	if (h == NULL)
	{
		return (0);
	}
	move = h;
	while (move != NULL)
	{
		move = move->next;
		i++;
	}
	return (i);
}
