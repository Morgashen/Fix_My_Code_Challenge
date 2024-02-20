#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint_list - Prints a doubly linked list of integers
 *
 * @head: A pointer to the first element of a list
 *
 * Return: The number of elements printed
 */
size_t print_dlistint_list(const dlistint_t *head)
{
    size_t n; /* A counter variable */

    /* Initialize the counter to zero */
    n = 0;

    /* Loop through the list until the end is reached */
    while (head)
    {
        /* Print the data of the current node */
        printf("%d\n", head->n);

        /* Move the head pointer to the next node */
        head = head->next;

        /* Increment the counter */
        n++;
    }

    /* Return the number of elements printed */
    return (n);
}
