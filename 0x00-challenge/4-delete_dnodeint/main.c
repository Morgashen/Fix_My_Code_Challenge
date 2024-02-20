#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Test the functions for manipulating a doubly linked list of integers
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */
int main(void)
{
    dlistint_t *list; /* The doubly linked list */

    /* Initialize the list to NULL */
    list = NULL;

    /* Add some nodes at the end of the list */
    if (append_dnodeint(&list, 0) == NULL ||
        append_dnodeint(&list, 1) == NULL ||
        append_dnodeint(&list, 2) == NULL ||
        append_dnodeint(&list, 3) == NULL ||
        append_dnodeint(&list, 4) == NULL ||
        append_dnodeint(&list, 98) == NULL ||
        append_dnodeint(&list, 402) == NULL ||
        append_dnodeint(&list, 1024) == NULL)
    {
        /* Handle the error */
        fprintf(stderr, "Failed to add a node\n");
        free_dlistint_list(list);
        return (EXIT_FAILURE);
    }

    /* Print the list */
    printf("Original Linked list\n");
    display_dnodeint(list);
    printf("-----------------\n");

    /* Delete the node at index 5 */
    if (remove_dnodeint_at_index(&list, 5) == -1)
    {
        /* Handle the error */
        fprintf(stderr, "Failed to delete a node\n");
        free_dlistint_list(list);
        return (EXIT_FAILURE);
    }

    /* Print the list */
    printf("Modified Linked list\n");
    display_dnodeint(list);
    printf("-----------------\n");

    /* Delete the first node */
    if (remove_dnodeint_at_index(&list, 0) == -1)
    {
        /* Handle the error */
        fprintf(stderr, "Failed to delete a node\n");
        free_dlistint_list(list);
        return (EXIT_FAILURE);
    }

    /* Print the list */
    printf("Modified Linked list\n");
    display_dnodeint(list);
    printf("-----------------\n");

    /* Delete the first node */
    if (remove_dnodeint_at_index(&list, 0) == -1)
    {
        /* Handle the error */
        fprintf(stderr, "Failed to delete a node\n");
        free_dlistint_list(list);
        return (EXIT_FAILURE);
    }

    /* Print the list */
    printf("Modified Linked list\n");
    display_dnodeint(list);
    printf("-----------------\n");

    /* Delete the first node */
    if (remove_dnodeint_at_index(&list, 0) == -1)
    {
        /* Handle the error */
        fprintf(stderr, "Failed to delete a node\n");
        free_dlistint_list(list);
        return (EXIT_FAILURE);
    }

    /* Print the list */
    printf("Modified Linked list\n");
    display_dnodeint(list);
    printf("-----------------\n");

    /* Delete the first node */
    if (remove_dnodeint_at_index(&list, 0) == -1)
    {
        /* Handle the error */
        fprintf(stderr, "Failed to delete a node\n");
        free_dlistint_list(list);
        return (EXIT_FAILURE);
    }

    /* Print the list */
    printf("Modified Linked list\n");
    display_dnodeint(list);
    printf("-----------------\n");

    /* Delete the first node */
    if (remove_dnodeint_at_index(&list, 0) == -1)
    {
        /* Handle the error */
        fprintf(stderr, "Failed to delete a node\n");
        free_dlistint_list(list);
        return (EXIT_FAILURE);
    }

    /* Print the list */
    printf("Modified Linked list\n");
    display_dnodeint(list);
    printf("-----------------\n");

    /* Delete the first node */
    if (remove_dnodeint_at_index(&list, 0) == -1)
    {
        /* Handle the error */
        fprintf(stderr, "Failed to delete a node\n");
        free_dlistint_list(list);
        return (EXIT_FAILURE);
    }
    printf("-----------------\n");

    /* Delete the first node */
    if (remove_dnodeint_at_index(&list, 0) == -1)
    {
        /* No error, the list is empty */
        printf("The list is empty\n");
    }
    printf("-----------------\n");

    /* Delete the first node */
    if (remove_dnodeint_at_index(&list, 0) == -1)
    {
        /* No error, the list is empty */
        printf("The list is empty\n");
    }
    printf("-----------------\n");

    /* Delete the first node */
    if (remove_dnodeint_at_index(&list, 0) == -1)
    {
        /* No error, the list is empty */
        printf("The list is empty\n");
    }
    printf("-----------------\n");

    /* Delete the first node */
    if (remove_dnodeint_at_index(&list, 0) == -1)
    {
        /* No error, the list is empty */
        printf("The list is empty\n");
    }
    printf("-----------------\n");

    /* Delete the first node */
    if (remove_dnodeint_at_index(&list, 0) == -1)
    {
        /* No error, the list is empty */
        printf("The list is empty\n");
    }
    printf("-----------------\n");

    /* Delete the first node */
    if (remove_dnodeint_at_index(&list, 0) == -1)
    {
        /* No error, the list is empty */
        printf("The list is empty\n");
    }
    printf("-----------------\n");

    /* Print the list */
    printf("Final Linked list\n");
    display_dnodeint(list);

    /* Free the list */
    free_dlistint_list(list);

    /* Return success */
    return (EXIT_SUCCESS);
}
