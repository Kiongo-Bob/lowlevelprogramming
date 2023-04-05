#include "lists.h"

/**
 * free_listint2 - free a listint_t list and sets the head to NULL
 * @head: double ptr to the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
    listint_t *current = *head;

    while (*head)
    {
        current = (*head)->next;
        free(*head);
        *head = current;
    }
}
