#include "lists.h"
/**
 * print_list - prints every element of a list_t list.
 * @h: singly linked list.
 * Return: no. of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t sm;

	sm = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		sm++;
	}
	return (sm);
}
