#include "lists.h"
/**
 * *add_nodeint - will edit this later
 * @head: Pointer to the head of the list
 * @n: value to add to the new node in the list
 * Return: the address of the new element in the list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (new);
}
