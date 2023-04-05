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
	unsigned int i;

	/*iterate thorugh nodes in list till the index nth node*/
	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	/*return head*/
	return (head);
}
