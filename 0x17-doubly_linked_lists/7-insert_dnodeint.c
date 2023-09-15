#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a dlistint_t list.
 * @h: Pointer to the pointer of the head of the doubly linked list.
 * @idx: Index where the new node should be added, starting from 0.
 * @n: Integer value to store in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    dlistint_t *current = *h;

    if (new_node == NULL)
    {
        return (NULL); /* Return NULL if memory allocation fails. */
    }

    new_node->n = n;

    if (*h == NULL && idx != 0)
    {
        free(new_node);
        return (NULL);
    }

    if (idx == 0)
    {
        new_node->next = *h;
        new_node->prev = NULL;
        if (*h != NULL)
        {
            (*h)->prev = new_node;
        }
        *h = new_node;
        return (new_node);
    }

    while (idx > 1)
    {
        if (current == NULL)
        {
            free(new_node);
            return (NULL);
        }
        current = current->next;
        idx--;
    }

    new_node->next = current->next;
    new_node->prev = current;
    if (current->next != NULL)
    {
        current->next->prev = new_node;
    }
    current->next = new_node;

    return (new_node);
}
