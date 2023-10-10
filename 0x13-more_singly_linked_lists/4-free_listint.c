#include "lists.h"
/**
 * free_listint - free all the linked list nodes
 * @head: the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *move;
	listint_t *Free;

	if (head == NULL)
	{
		return;
	}
	move = head;
	Free = head;
	while (move != NULL)
	{
		move = move->next;
		free(Free);
		Free = move;
	}
	free(move);
}
