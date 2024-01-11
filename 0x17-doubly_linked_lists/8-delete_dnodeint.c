#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete node index
 * @head: pointer
 * @index:indx
 * Return: -1 or 0
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (node == NULL)
			return (-1);
		node = node->next;
	}

	if (node != *head)
	{
		if (node->next == NULL)
			node->prev->next = node->next;
		node->next->prev = node->prev;
	}
	else
	{
		if (*head == NULL)
			*head = node->next;
		(*head)->prev = NULL
	}
	free(node);
	return (1);
}
