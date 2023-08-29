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
	listint_t *move;

	if (head == NULL)
		return (NULL);
	move = get_nodeint_at_index((*head), idx);

	if (move == NULL && idx > 0)
		return (NULL);

	return (new_node(&move, n));
}

/**
 * *get_nodeint_at_index - a function that searches for a node in linked list
 * @head: the head of the list
 * @index: the index of the node u want to find
 * Return: a pointer to that node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *move;

	move = head;
	if(index > 0)
	index--;
	while (index > 0)
	{
		if (move == NULL)
			return (NULL);

		move = move->next;
		index--;
	}
	return (move);
}

/**
 * *new_node - add a new node to the list
 * @head: A pinter to the start of the list
 * @n: the value must be assigend to new node
 * Return: the addres of the new node
 */
listint_t *new_node(listint_t **head, int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if ((*head) == NULL)
	{
		new->next = NULL;
		(*head) = new;
	}
	else
	{
		new->next = (*head)->next;
		(*head)->next = new;
	}
	return (new);
}
