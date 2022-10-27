#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *add_nodeint_end - Adds a node at the end of a linked list
  * @head: Pointer to the head of a linked list
  * @n: The data to be entered at the end of the list
  *
  * Return: Addess of the element else NULL if it fails
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *lastNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}

	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}

	return (*head);
}
