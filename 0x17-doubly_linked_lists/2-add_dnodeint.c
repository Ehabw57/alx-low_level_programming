#include "lists.h"

/**
 * *add_dnodeint - Add a new node of the linked list
 * @head: the head of the list
 * @n: int  data to add
 * Return: head of the new list or NUll if somithnig went wrong
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = (*head);
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	(*head) = new;
	return (*head);
}
