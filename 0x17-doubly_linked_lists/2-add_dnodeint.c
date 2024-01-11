#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add new head to list
 * @head: pointer adress
 * @n: element
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head || !new)
		return (NULL);
	new->prev = NULL;
	new->next = *head;
	new->n = n;
	if (!*head)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}

	return (new);
}
