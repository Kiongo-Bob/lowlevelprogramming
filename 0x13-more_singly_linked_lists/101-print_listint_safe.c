#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	listint_t *rest = reverse_listint(&((*head)->next));
	(*head)->next->next = *head;
	(*head)->next = NULL;
	*head = rest;

	return (*head);
}
