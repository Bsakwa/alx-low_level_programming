#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h : Pointer to the list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
