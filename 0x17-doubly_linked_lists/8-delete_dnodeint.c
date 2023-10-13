#include "lists.h"
/**
 * delete_dnodeint_at_index - Deltes a node at indx
 * @head: Head of the dlistint
 * @index: The indx u want to delete
 * Return: 1 if succes -1 if fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *move = *head;

	if (index == 0 && *head != NULL)
	{
		*head = (*head)->next;
		free(move);
		return (1);
	}

	for (move = *head; move != NULL; index--)
	{
		if (index == 0)
		{
			move->prev->next = move->next;
			if (move->next != NULL)
				move->next->prev = move->prev;
			free(move);
			return (1);
		}
		move = move->next;
	}

	return (-1);
}
