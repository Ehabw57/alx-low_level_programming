#include "lists.h"
/**
 * sum_listint - sum all the n data
 * @head: head of the list
 * Return: the sum of all (data) in the list
*/
int sum_listint(listint_t *head)
{
	/**
	 * we need one ptr to listint to move
	 * we need one int for the result
	 * make move == head
	 * loop througe each node with move
	 * on each loop make int += move->n
	 * stop when move == NULL
	 * return int
	 */
	int r = 0;
	listint_t *move;

	move = head;
	while (move != NULL)
	{
		r += move->n;
		move = move->next;
	}
	return (r);
}
