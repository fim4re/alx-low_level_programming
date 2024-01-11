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

	if (*head)
	{
		for (; index != 0; index--)
		{
			if (node == NULL)
				return (-1);
			node = node->next;
		}
	else
		return (-1);

	if (node != *head)
	{
		if (tmp->next == NULL)
			node->next->prev = node->prev;
		node->prev->next = node->next;
	}
	else
	{
		if (*head != NULL)
			(*head)->prev = NULL;
		*head = node->next;
	}
	free(node);
	return (1);
}
