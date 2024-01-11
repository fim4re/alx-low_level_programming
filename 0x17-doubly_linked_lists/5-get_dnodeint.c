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

	while (head != NULL)
	{
		if (y != index)
		{
			head = head->next;
			y++;
		}
		else
		{
			return (head);
		}
	}
	return (NULL);
}
