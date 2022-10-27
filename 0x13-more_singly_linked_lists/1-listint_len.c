#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
  *listint_len - Returns the number of elements in a linked list
  *@h: The linked list from which to return the number of elements
  *
  * Return: The number of elements
  */
size_t listint_len(const listint_t *h)
{
	int length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
