#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at the speciied index in a listint_t list
 * @head: ptr to the head of the list
 * @index: indx of the node to retrieve
 *
 * Return: ptr to the node at the given index, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *current = head;

    for (unsigned int i = 0; current != NULL && i < index; i++)
        current = current->next;

    return current;
}
