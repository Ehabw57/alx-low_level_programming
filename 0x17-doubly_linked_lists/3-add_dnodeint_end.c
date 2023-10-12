#include "lists.h"

/**
 * *add_dnodeint_end - add a new node to the end of dlinst
 * @head: The head of the dlist
 * @n: data to add to dlist
 * Return: new head of the list or Null if somthing went wrong
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *move = (*head);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (move != NULL)
	{
		while (move->next != NULL)
			move = move->next;

		move->next = new;
		new->prev = move;
		return (*head);
	}

	new->prev = NULL;
	(*head) = new;
	return (*head);
}
