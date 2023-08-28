#include "lists.h"
/**
 * *add_nodeint_end - add a new node to the end of the list
 * @head: a Pointer to the filrst elment in the list
 * @n: the value to asigen for the new node
 * Return: NULL if fails or the addres of the new elment if suxxes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *move;
	listint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}

	if ((*head) == NULL)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
		{
			return (NULL);
		}

		new->n = n;
		new->next = NULL;
		(*head) = new;
	}
	else
	{
		move = (*head);
		while (move->next != NULL)
		{
			move = move->next;
		}
		new = malloc(sizeof(listint_t));

		if (new == NULL)
		{
			return (NULL);
		}

		new->n = n;
		new->next = NULL;
		move->next = new;
	}
	return (new);
}
