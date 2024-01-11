#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: pointer of hesd
 * @idx: insert new node
 * @n: new node
 * Return: address of new node or NULL if error
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
	}

	if (node->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = node;
	new->next = node->next;
	node->next->prev = new;
	node->next = new;

	return (new);
}
