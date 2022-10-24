#include <stdio.h>
#include "lists.h"
/**
  * list_len - Returns the number of elements in a linked list
  * @h: The list to return the length from
  *
  * Return: Number of elements
  */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
