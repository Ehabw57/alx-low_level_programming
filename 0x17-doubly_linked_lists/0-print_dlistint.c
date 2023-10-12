#include "lists.h"
/**
 * print_dlistint - print each node data of dlist
 * @h: head of the list
 * Return: number of nodes printed
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *m = NULL;
	size_t n = 0;

	if (h == NULL)
		return (0);
	for (m = h; m != NULL; n++)
	{
		printf("%i\n", m->n);
		m = m->next;
	}
	return (n);
}
