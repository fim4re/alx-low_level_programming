#include "lists.h"

/**
 * sum_dlistint - return sum of elements in list
 * @head: pointer
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	int s = 0;
	do
	{
		s += head->n;
		head = head->next;
	} while (head)
	return (s);
}
