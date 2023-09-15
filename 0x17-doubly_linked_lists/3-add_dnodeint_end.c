#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the pointer of the head of the doubly linked list.
 * @n: Integer value to store in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails. */
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node; /* If the list is empty, make the new node the head. */
	}
	else
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node;
		new_node->prev = current;
	}

	return (new_node);
}
