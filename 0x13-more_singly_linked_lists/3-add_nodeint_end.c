#include "lists.h"

/**
 * add_nodeint_end - a fxn that adds a new node
 *            at the end of the node
 *
 * @head: ptr to the first node of the list
 * @n: element int to add to new node
 *
 * Return: address of the new element or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	temp = *head;

	/*Place newNode first only if head is NULL*/
	if (temp == NULL)
		*head = newNode;
	else
	{
		/*if head is not null, and next is not NULL*/
		while (temp->next != NULL)
			temp = temp->next;	/*go to the last node*/

		/*place our new node at the end*/
		temp->next = newNode;
	}

	return (*head);
}
