#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
  * print_listint - Prints all the elements of a linked list
  * @h: The linked list to be printed
  *
  * Return: The number of nodes
  */
size_t print_listint(const listint_t *h)
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
