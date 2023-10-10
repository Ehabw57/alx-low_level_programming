#include "lists.h"
/**
 * *insert_nodeint_at_index - Add a new node at a given index
 * @head: Pointer to the head of the list
 * @idx: The given index
 * @n: the value must be addigend to new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *move;

	move = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;
	if ((*head) == NULL)
	{
		new->next = NULL;
		(*head) = new;
	}
	else if ((*head) != NULL && idx > 0)
	{
		while (idx > 1)
		{
			if (move == NULL)
			{
				return (NULL);
			}
			move = move->next;
			idx--;
		}
		new->next = move->next;
		move->next = new;
	}
	else if ((*head) != NULL && idx == 0)
	{
		new->next = (*head);
		(*head) = new;
	}
	return (new);
}
