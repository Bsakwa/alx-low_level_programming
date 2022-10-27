#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * pop_listint - Deletes the head node of a linked list
  * @head: Pointer to the head of a linked list
  *
  * Return: 0 if the linked list is empty
  */
int pop_listint(listint_t **head)
{
	listint_t *delnode;
	int ret;

	if (*head == NULL)
	{
		return (0);
	}

	delnode = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(delnode);

	return (ret);
}

