#include "lists.h"
/**
 * *get_nodeint_at_index - a function that searches for a node in linked list
 * @head: the head of the list
 * @index: the index of the node u want to find
 * Return: a pointer to that node of the list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/**
	 * we need 1 ptr to listint_t
	 * make a loop that goes throug the list
	 * stop when (index) reaches 0
	 * if ptr reachd ot the end and index is not 0 return NULL
	 * return that ptr
	 */
	listint_t *move;

	move = head;
	while (index != 0)
	{
		if (move == NULL)
		{
			return (NULL);
		}
		move = move->next;
		index--;
	}
	return (move);
}
