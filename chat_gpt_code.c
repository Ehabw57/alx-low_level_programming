#include "lists.h"

int is_palindrome(listint_t **head)
{
    if (*head == NULL || (*head)->next == NULL)
        return 1; // An empty list or a list with a single node is considered a palindrome

    listint_t *slow = *head; // Slow pointer moves one node at a time
    listint_t *fast = *head; // Fast pointer moves two nodes at a time

    // Find the middle node of the list using the two-pointer approach
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse the second half of the list
    listint_t *prev = NULL;
    listint_t *curr = slow;
    listint_t *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    // Compare the first half with the reversed second half
    listint_t *firstHalf = *head;
    listint_t *secondHalf = prev;

    while (secondHalf != NULL)
    {
        if (firstHalf->n != secondHalf->n)
        {
            // Restore the original list by reversing the second half back
            curr = prev;
            prev = NULL;

            while (curr != NULL)
            {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }

            slow->next = prev; // Connect the reversed second half back to the first half
            return 0; // Not a palindrome
        }

        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    // Restore the original list by reversing the second half back
    curr = prev;
    prev = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    slow->next = prev; // Connect the reversed second half back to the first half
    return 1; // Palindrome
}
