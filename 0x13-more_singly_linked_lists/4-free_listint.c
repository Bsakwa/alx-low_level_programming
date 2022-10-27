#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * free_listint - frees a linked list
  * @head: Pointer to the head of the list
  *
  * Return: Nothing
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
