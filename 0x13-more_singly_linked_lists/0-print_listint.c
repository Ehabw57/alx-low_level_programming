#include "lists.h"
/**
 * print_listint - a functon that prints each node in the LInked list
 * @h: the head of the list
 * Return: the number of nodes printed
*/
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *move;

	if (h == NULL)
	{
		return (0);
	}

	move = h;
	while (move != NULL)
	{
		printf("%i\n", move->n);
		move = move->next;
		i++;
	}
	return (i);
}
