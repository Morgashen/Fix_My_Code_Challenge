#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint_list - Free a doubly linked list
 *
 * @head: A pointer to the first element of the list
 */
void free_dlistint_list(dlistint_t *head)
{
    dlistint_t *current_node; /* The current node to be freed */

    /* Loop through the list until the end is reached */
    while (head)
    {
        /* Save the current node */
        current_node = head;
        /* Move the head pointer to the next node */
        head = head->next;
        /* Free the current node */
        free(current_node);
    }
}
