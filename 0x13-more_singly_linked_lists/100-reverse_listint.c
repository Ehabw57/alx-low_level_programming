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

/**
 * listint_len - a function that returns the number of nodes in the linked list
 * @h: the head of the list
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
    const listint_t *move;
    unsigned int i = 0;

    if (h == NULL)
    {
        return (0);
    }
    move = h;
    while (move != NULL)
    {
        move = move->next;
        i++;
    }
    return (i);
}

listint_t *reverse_listint(listint_t **head)
{
    /**
     * caluclte the lenth of the list by gitlist
     * make it eqal to int lenth
     * creat a new pointer to struct list
     * loop thoug the list head
     * make add_node (newhead,move.n)
     * move = move.next
     * stop when lenth reaches 0
     */
    listint_t *new;
    unsigned int lenth;

    lenth = listint_len((*head));
    while (lenth > 0)
    {
        add_nodeint(&new, (*head)->n);
        (*head) = (*head)->next;
        lenth--;
    }
    (*head) = new;
    return (*head);
}
