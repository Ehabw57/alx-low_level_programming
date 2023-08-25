#include "lists.h"
/**
 * *add_node_end - Adds a new node to the end of the linked list
 * @head: A pointer that hold the addres of the head of the list
 * @str: A string to copy to the new node
 * Return: The new updated list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *move;

	tmp = malloc(sizeof(list_t));

	if (tmp == NULL)
	{
		return (NULL);
	}

	tmp->str = strdup(str);
	tmp->len = strlen(str);
	tmp->next = NULL;

	if ((*head) != NULL)
	{
		move = (*head);
		while (move->next != NULL)
		{
			move = move->next;
		}
		move->next = tmp;
	}

	else
	{
		(*head) = tmp;
	}

	return (*head);
}
