#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * a linked list.
 * @head: head of a list.
 *
 * Return: sum of all data (n).
 */
int sum_listint(listint_t *head)
{
    if (head == NULL)
        return 0;

    int sum = head->n;
    listint_t *current = head->next;

    while (current != NULL)
    {
        sum += current->n;
        current = current->next;
    }

    return sum;
}
