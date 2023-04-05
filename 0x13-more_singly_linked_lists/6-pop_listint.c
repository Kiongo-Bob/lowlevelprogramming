#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t list
 * @head: double ptr to the head of the list
 *
 * Return: the integer value of the deleted node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
    int data = 0;
    listint_t *temp;

    if (head == NULL || *head == NULL)
        return (data);

    temp = *head;
    data = temp->n;
    *head = (*head)->next;
    free(temp);

    return (data);
}
