#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t **current = head;
	listint_t *to_free;
	unsigned int i;

	if (!head || !(*head))
		return (-1);

	for (i = 0; i < index; i++)
	{
		if (!*current)
			return (-1);

		current = &((*current)->next);
	}

	to_free = *current;
	*current = (*current)->next;

	free(to_free);

	return (1);
}
