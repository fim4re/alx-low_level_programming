#include "lists.h"

/**
 * sum_dlistint - return sum of elements in list
 * @head: pointer
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
