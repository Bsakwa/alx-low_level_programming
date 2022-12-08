#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked list
 * @h: Pointer to the linked list
 *
 * Return: The number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
