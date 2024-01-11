#include "lists.h"

/**
 * dlistint_len - Return len of list
 * @h: head node adress
 * Return: lists size
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
