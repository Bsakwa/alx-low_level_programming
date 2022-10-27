#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *delete_nodeint_at_index - Deletes node at index
  * @head: Pointer to the head of the linked list
  * @index: The index of the node to be deleted
  *
  * Return: 1 if succeeded and -1 if it fails
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy = *head;

	unsigned int b;

	if (copy == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (b = 0; b < (index - 1); b++)
	{
		if (copy->next == NULL)
		{
			return (-1);
		}
		copy = copy->next;
	}
	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (-1);
}
