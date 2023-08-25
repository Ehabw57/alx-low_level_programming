#include "lists.h"
/**
 * free_list - Free all nodes in the linked list
 * @head: the head of the linked list
*/
void free_list(list_t *head)
{
	list_t *move;
	list_t *Free;

	move = head;
	Free = head;

	while (move->next != NULL)
	{
		move = move->next;
		free(Free->str);
		free(Free);
		Free = move;
	}
	free(Free->str);
	free(Free);
}
