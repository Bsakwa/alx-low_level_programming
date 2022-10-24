#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  * add_node_end - Adds a new node at the end of a linked list
  *@head: Pointer to the head of the linked list
  *@str: The string to be added at the end of the linked list
  *
  * Return: Address of the new element or NULL if it fails
  */
list_t *add_node_end(list_t **head, const char *str)
{
	char *val;
	int length;
	list_t *newNode, *lastNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)

		return (NULL);

	val = strdup(str);
	if (str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	for (length = 0; str[length];)
		length++;
	{

		newNode->str = val;
		newNode->len = length;
		newNode->next = NULL;
	}
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



