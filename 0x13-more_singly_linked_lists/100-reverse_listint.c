#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *stack = NULL;
	listint_t *curr = *head;

	while (curr != NULL)
	{
		listint_t *next = curr->next;
		curr->next = NULL;
		push(&stack, curr);
		curr = next;
	}

	*head = stack;

	return (*head);
}

/**
 * push - pushes a node to the top of a stack.
 * @stack: pointer to the top of the stack.
 * @node: node to push.
 *
 * Return: pointer to the top of the stack.
 */
void push(listint_t **stack, listint_t *node)
{
	if (stack == NULL || node == NULL)
		return;

	node->next = *stack;
	*stack = node;
}
