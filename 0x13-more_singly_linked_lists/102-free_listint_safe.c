#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *prev, *curr;

	if (!h)
		return (0);

	prev = NULL;
	curr = *h;

	while (curr)
	{
		if (curr < curr->next)
		{
			prev = curr;
			curr = curr->next;
			free(prev);
			len++;
		}
		else
		{
			free(curr);
			len++;
			*h = NULL;
			break;
		}
	}

	return (len);
}
