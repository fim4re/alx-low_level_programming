#include "lists.h"

/**
 * dlistint_len - Return len of list
 * @h: head node adress
 * Return: lists size
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	do {
		h = h->next;
		len++;
	} while (h);
	return (len);
}
