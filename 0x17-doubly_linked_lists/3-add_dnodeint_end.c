#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a list
 * @head: The head node of the list
 * @n: The data to be appended at the end
 *
 * Return: Address of the new element of NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node, *temp;

	last_node = malloc(sizeof(dlistint_t));

	if (last_node == NULL)
		return (NULL);
	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		last_node->prev = NULL;
		*head = last_node;
		return (last_node);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = last_node;
	last_node->prev = temp;

	return (last_node);
}

