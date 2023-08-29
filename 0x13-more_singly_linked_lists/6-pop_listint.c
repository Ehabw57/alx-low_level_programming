#include "lists.h"
/**
 * pop_listint - pops up the head node and returns its (n) data
 * @head: a pointer to the head of the list
 * Return: (n) data of the deleted node
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmp;

	if (head == NULL)
		return (0);

	tmp = (*head);
	i = tmp->n;
	tmp = tmp->next;
	free(*head);
	(*head) = tmp;

	return (i);
}
