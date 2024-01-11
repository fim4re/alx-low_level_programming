#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a dlist
 * @head: poiter
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *dl;

	dl = head;
	while (head)
	{
		head = head->next;
		free(dl);
	}
}
