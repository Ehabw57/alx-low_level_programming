#include "lists.h"
/**
 * *add_node - adds a new node to the linked list
 * @head: a pointer that holds an address of another pointer to node
 * @str: the string to copy inside str member
 * Return: the new updated head
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));

	if (tmp == NULL)
	{
		return (NULL);
	}

	tmp->str = strdup(str);
	tmp->len = strlen(str);
	tmp->next = (*head);

	(*head) = tmp;
	return (*head);
}
