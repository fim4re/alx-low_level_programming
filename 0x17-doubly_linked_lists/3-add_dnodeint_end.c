#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add node at the end of the list
 * @head: head list
 * @n: node list
 * Return: new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *nd;

	if (!new || !head)
		return (NULL);

	if (*head == NULL)
	{
		new->next = NULL;
		new->n = n;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (nd->next)
			nd = nd->next;
		nd->next = new;
		new->prev = nd;
		new->next = NULL;
		new->n = n;
	}
	return (new);
}
