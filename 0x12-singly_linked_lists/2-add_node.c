#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  * add_node - Adds a node at the beginning of a linked list
  * @head: Pointer to the head node
  * @str: String to be added to the linked list
  *
  * Return: Address of the new node or NULL if it fails
  */
list_t *add_node(list_t **head, const char *str)
{
	char *val;
	int len;
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	val = strdup(str);
	if (val == NULL)
	{
		free(newNode);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	{
		newNode->str = val;
		newNode->len = len;
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}

