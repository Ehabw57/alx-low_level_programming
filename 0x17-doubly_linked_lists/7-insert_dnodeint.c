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
	int i = 0;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (*h);
	}

	for (move = (*h); move != NULL; i++)
	{
		if (idx == i)
		{
			new->next = move->next;
			move->next->prev = new;
			move->next = new;
			new->prev = move;
			return (new);
		}
		move = move->next;
	}
	free(new);
	return (NULL);
}
