#include "lists.h"

/**
 * dlistint_len - count the lenth of a linked list
 * @h: Head of the linked list
 * Return: the length of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *m = NULL;
	size_t lenth = 0;

	if (h == NULL)
		return (0);

	for (m = h; m != NULL; lenth++)
		m = m->next;

	return (lenth);
}
