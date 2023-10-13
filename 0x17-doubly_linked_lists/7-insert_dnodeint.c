#include "lists.h"

/**
 * insert_dnodeint_at_index - add new node at idx
 * @h: head of the dlist
 * @idx: the index u want to add node at
 * @n: the node data
 * Return: new mod head or NUll if somthing went wrong
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *move = NULL;

	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (*h);
	}

	for (move = (*h); move != NULL && idx > 1; idx--)
		move = move->next;

	new = malloc(sizeof(dlistint_t));

	if (new != NULL && idx <= 1)
	{
		new->n = n;
		new->next = move->next;
		if (move->next != NULL)
			move->next->prev = new;
		move->next = new;
		new->prev = move;
		return (new);
	}

	return (NULL);
}
