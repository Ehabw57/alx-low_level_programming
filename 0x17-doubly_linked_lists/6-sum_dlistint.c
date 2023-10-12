#include "lists.h"

/**
 * sum_dlistint - sums all the dlistin data
 * @head: head of the dlist
 * Return: sum of the data or 0 if there is nothing to sum
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *move = NULL;
	int sum = 0;

	for (move = head; move != NULL; move = move->next)
	{
		if (move == NULL)
			return (sum);
		sum += move->n;
	}

	return (sum);
}
