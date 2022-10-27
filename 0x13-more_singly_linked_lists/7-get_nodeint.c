#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * get_nodeint_at_index - Returns the nth node of a linked list
  * @head: Pointer to the head of the linked list
  * @index: The index of the node starting at 0
  *
  * Return: NULL if node does not exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (count < index)
	{
		count++;
		head = head->next;
	}
	return (head);
}
