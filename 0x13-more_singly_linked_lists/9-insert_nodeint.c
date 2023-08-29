#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/**
	 * we need new and move
	 * move == *head
	 *
	 * if (*head == NULL)
	 * new.next == nULL
	 * *head == new

	 *
	 * new = malloc
	 * new.n = n
	 *
	 * else
	* while (idx > 1)
	 * move = move.next
	 * idx--;
	 * new.next == move.next
	 * move.next == new
	 */
	listint_t *new, *move;

	move = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL || head == NULL)
		return NULL;

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
	return new;
}