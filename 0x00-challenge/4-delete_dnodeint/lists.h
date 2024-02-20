#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>

/**
 * struct dlistint_s - Doubly linked list node
 * @n: Integer data
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 *
 * Description: A structure to represent a node of a doubly linked list
 * of integers for Holberton project
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/**
 * display_dlistint - Prints a doubly linked list of integers
 *
 * @head: A pointer to the first element of a list
 *
 * Return: The number of elements printed
 */
size_t display_dlistint(const dlistint_t *head);

/**
 * append_dnodeint - Appends a node at the end of a doubly linked list
 *
 * @head: A pointer to the first element of a list
 * @n: The integer data to store in the new node
 *
 * Return: A pointer to the new node, or NULL if it fails
 */
dlistint_t *append_dnodeint(dlistint_t **head, const int n);

/**
 * remove_dnodeint_at_index - Removes a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to remove
 *
 * Return: 1 on success, -1 on failure
 */
int remove_dnodeint_at_index(dlistint_t **head, unsigned int index);

/**
 * destroy_dlistint - Frees a doubly linked list
 *
 * @head: A pointer to the first element of a list
 */
void destroy_dlistint(dlistint_t *head);

#endif
