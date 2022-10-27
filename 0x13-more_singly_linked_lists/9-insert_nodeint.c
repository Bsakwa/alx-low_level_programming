#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * insert_nodeint_at_index - Inserts node at a certain index
  * @head: A pointer to the head of the linked list
  * @idx: Index where the new node should be added
  * @n: The integer to be added
  *
  * Return: NULL if it fails or address of the new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *copy = *head;
	unsigned int b;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = copy;
		*head = newNode;
		return (newNode);
	}

	for (b = 0; b < (idx - 1); b++)
	{
		if (copy == NULL || copy->next  == NULL)
			return (NULL);

		copy = copy->next;
	}
	newNode->next = copy->next;
	copy->next = newNode;

	return (newNode);
}

