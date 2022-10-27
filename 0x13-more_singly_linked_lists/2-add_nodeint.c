#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
  *add_nodeint - adds a node at the beginning of a list
  *@head: Pointer to the head node
  *@n: The data to be added on the list
  *
  * Return: NULL if it fails otherwise address of new element
  */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}

