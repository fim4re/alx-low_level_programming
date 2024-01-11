#include "lists.h"

/**
 * get_dnodeint_at_index - returns node of linked list
 * @head: pointer
 * @index: idx
 * Return: element by idx
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int y;

	while (head)
	{
		while (y != index)
		{
			head = head->next;
			y++;
		}
		if (y == index)
			return (head);
	}
	return (NULL);
}
