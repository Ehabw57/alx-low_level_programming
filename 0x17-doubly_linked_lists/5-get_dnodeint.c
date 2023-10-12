#include "lists.h"

/**
 * *get_dnodeint_at_index - get a node of dlist at indx
 * @head: head of the dlist
 * @index: index u want to find
 * Return: pointer to that index or NULl if it's not there
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *move = NULL;

	for (move = head; move != NULL; index--)
	{
		if (index <= 0)
			return (move);
		move = move->next;
	}
	return (NULL);
}
