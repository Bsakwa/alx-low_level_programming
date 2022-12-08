#include "lists.h"

/**
 * sum_dlistint - Sums all the data in a list
 * @head: The head node of the list
 *
 * Return: sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

