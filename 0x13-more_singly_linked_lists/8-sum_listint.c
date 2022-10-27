#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * sum_listint - Returns the sum of all
  * @head : A pointer to the head of the list
  *
  * Return: Sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
