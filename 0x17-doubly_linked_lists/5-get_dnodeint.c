#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a list
 * @head: The head node of the list
 * @index: The index from which to obtain the node from
 *
 * Return: NULL if node does not exist otherwise the address of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
