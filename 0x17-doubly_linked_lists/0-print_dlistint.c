#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head node adress
 * Return: size of list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;
	const dlistint_t *tmp = h;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		c++;
		tmp = tmp->next;
	}
	return (c);
}
