#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * append_dnodeint - Append a node at the end of a doubly linked list
 *
 * @head: The address of the pointer to the first element of the list
 * @n: The number to store in the new element
 *
 * Return: A pointer to the new element, or NULL if it fails
 */
dlistint_t *append_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node; /* The new node to be added */
    dlistint_t *last_node; /* The last node of the list */

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    /* Assign the data and the next pointer of the new node */
    new_node->n = n;
    new_node->next = NULL;

    /* If the list is empty, make the new node the head */
    if (*head == NULL)
    {
        *head = new_node;
        new_node->prev = NULL;
        return (new_node);
    }

    /* Traverse the list until the last node is found */
    last_node = *head;
    while (last_node->next != NULL)
    {
        last_node = last_node->next;
    }

    /* Link the new node with the last node */
    last_node->next = new_node;
    new_node->prev = last_node;
    return (new_node);
}
