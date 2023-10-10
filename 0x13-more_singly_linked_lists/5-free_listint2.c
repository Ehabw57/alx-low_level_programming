#include "lists.h"
/**
 * free_listint2 - free all the linked list nodes and sets head to null
 * @head: the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *move;
	listint_t *Free;

	if (head == NULL)
	{
		return;
	}
	move = (*head);
	Free = (*head);
	while (move != NULL)
	{
		move = move->next;
		free(Free);
		Free = move;
	}
	(*head) = NULL;
	free(move);
}
