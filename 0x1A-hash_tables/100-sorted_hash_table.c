#include "hash_tables.h"

char *shash_table_get(const shash_table_t *hash_t, const char *key);
void shash_table_print(const shash_table_t *hash_t);
void shash_table_print_rev(const shash_table_t *hash_t);
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *hash_t, const char *key, const char *value);
void shash_table_delete(shash_table_t *hash_t);

/**
 * shash_table_create - Creates a sorted hash
 * @size: size of new sorted hash
 *
 * Return: If an error NULL Otherwise
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_t;
	unsigned long int j;

	hash_t = malloc(sizeof(shash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;
	hash_t->array = malloc(sizeof(shash_node_t *) * size);
	if (hash_t->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		hash_t->array[j] = NULL;
	hash_t->shead = NULL;
	hash_t->stail = NULL;

	return (hash_t);
}
/**
 * shash_table_set - Adds an element to a sorted hash
 * @hash_t: pointer to the sorted hash
 * @key: The key to add
 * @value: The value associated
 *
 * Return: Upon failure - 0 Otherwise - 1
*/
int shash_table_set(shash_table_t *hash_t, const char *key, const char *value)
{
	shash_node_t *node_n, *node_t;
	char *val_copy;
	unsigned long int index;

	if (hash_t == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_copy = strdup(value);
	if (val_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, hash_t->size);
	node_t = hash_t->shead;
	while (node_t)
	{
		if (strcmp(node_t->key, key) == 0)
		{
			free(node_t->value);
			node_t->value = val_copy;
			return (1);
		}
		node_t = node_t->snext;
	}

	node_n = malloc(sizeof(shash_node_t));
	if (node_n == NULL)
	{
		free(val_copy);
		return (0);
	}
	node_n->key = strdup(key);
	if (node_n->key == NULL)
	{
		free(val_copy);
		free(node_t);
		return (0);
	}
	node_n->value = val_copy;
	node_n->next = hash_t->array[index];
	hash_t->array[index] = node_n;

	if (hash_t->shead == NULL)
	{
		node_n->sprev = NULL;
		node_n->snext = NULL;
		hash_t->shead = new_n;
		hash_t->stail = node_n;
	}
	else if (strcmp(hash_t->shead->key, key) > 0)
	{
		node_n->sprev = NULL;
		node_n->snext = hash_t->shead;
		hash_t->shead->sprev = node_n;
		hash_t->shead = node_n;
	}
	else
	{
		node_t = hash_t->shead;
		while (node_t->snext != NULL && strcmp(node_t->snext->key, key) < 0)
			node_t = node_t->snext;
		node_n->sprev = node_t;
		node_n->snext = node_t->snext;
		if (node_t->snext == NULL)
			hash_t->stail = node_n;
		else
			node_t->snext->sprev = node_n;
		node_t->snext = node_n;
	}

	return (1);
}
/**
 * shash_table_get - Retrieve the value associated with a key
 * @hash_t: pointer to the sorted hash
 * @key: The key
 *
 * Return: If the key cannot be matched - NULL Otherwise
*/
char *shash_table_get(const shash_table_t *hash_t, const char *key)
{
	shash_node_t *n;
	unsigned long int index;

	if (hash_t == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, hash_t->size);
	if (index >= hash_t->size)
		return (NULL);

	n = hash_t->shead;
	while (n != NULL && strcmp(n->key, key) != 0)
		n = n->snext;

	return ((n == NULL) ? NULL : n->value);
}
/**
 * shash_table_print - Prints a sorted hash table
 * @hash_t: pointer to the sorted hash
*/
void shash_table_print(const shash_table_t *hash_t)
{
	shash_node_t *n;

	if (hash_t == NULL)
		return;

	n = hash_t->shead;
	printf("{");
	while (n != NULL)
	{
		printf("'%s': '%s'", n->key, n->value);
		n = n->snext;
		if (n != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - Prints hash table in reverse
 * @hash_t: pointer to the sorted hash
*/
void shash_table_print_rev(const shash_table_t *hash_t)
{
	shash_node_t *n;

	if (hash_t == NULL)
		return;

	n = hash_t->stail;
	printf("{");
	while (n != NULL)
	{
		printf("'%s': '%s'", n->key, n->value);
		n = n->sprev;
		if (n != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - Deletes hash table.
 * @hash_t: pointer to the sorted hash
*/
void shash_table_delete(shash_table_t *hash_t)
{
	shash_table_t *h = hash_t;
	shash_node_t *n, *node_t;

	if (hash_t == NULL)
		return;

	n = hash_t->shead;
	while (n)
	{
		node_t = n->snext;
		free(n->key);
		free(n->value);
		free(n);
		n = node_t;
	}

	free(h->array);
	free(h);
}
