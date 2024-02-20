#include "lists.h"
#include <stdlib.h>

/**
 * remove_dnodeint_at_index - Remove a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to remove
 *
 * Return: 1 on success, -1 on failure
 */
int remove_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *original_head; /* The original head of the list */
    dlistint_t *next_node; /* The node after the node to be removed */
    unsigned int i; /* A counter variable */

    /* Check if the list is empty */
    if (*head == NULL)
    {
        return (-1);
    }

    /* Save the original head of the list */
    original_head = *head;

    /* Traverse the list until the index or the end is reached */
    i = 0;
    while (i < index && *head != NULL)
    {
        *head = (*head)->next;
        i++;
    }

    /* Check if the index is valid */
    if (i != index)
    {
        /* Restore the original head of the list */
        *head = original_head;
        return (-1);
    }

    /* Check if the node to be removed is the first node */
    if (index == 0)
    {
        /* Save the next node */
        next_node = (*head)->next;
        /* Free the current node */
        free(*head);
        /* Make the next node the new head */
        *head = next_node;
        /* Check if the list is not empty */
        if (next_node != NULL)
        {
            /* Set the previous pointer of the new head to NULL */
            next_node->prev = NULL;
        }
    }
    else
    {
        /* Save the next node */
        next_node = (*head)->next;
        /* Link the previous node with the next node */
        (*head)->prev->next = next_node;
        /* Free the current node */
        free(*head);
        /* Check if the next node is not NULL */
        if (next_node != NULL)
        {
            /* Set the previous pointer of the next node to the previous node */
            next_node->prev = (*head)->prev;
        }
        /* Restore the original head of the list */
        *head = original_head;
    }
    return (1);
}

