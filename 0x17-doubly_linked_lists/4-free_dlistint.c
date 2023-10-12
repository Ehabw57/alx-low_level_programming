#include "lists.h"

/**
 * free_dlistint - free a dlist
 * @head: head of the dlist
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *move = head, *Free = head;

	if (head == NULL)
	return;

	while (1)
	{
		if (Free == NULL)
			return;
		move = move->next;
		free(Free);
		Free = move;
	}
}
