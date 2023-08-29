#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *move;
	listint_t *new;

	move = (*head);
	new = malloc(sizeof(listint_t));

	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;
	if ((*head) == NULL && idx == 0)
	{
		new->next = NULL;
		(*head) = new;
	}
	else
	{
		idx--;
		while (idx > 0)
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

	return (new);
}
