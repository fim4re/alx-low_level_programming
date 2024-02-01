#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated key
 * @hash_t: pointer to the hash table.
 * @key: key to get the value
 *
 * Return: If key cannot be matched - NULL
*/
char *hash_table_get(const hash_table_t *hash_t, const char *key)
{
	hash_node_t *node_t;
	unsigned long int index;

	if (hash_t == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, hash_t->size);
	if (index >= hash_t->size)
		return (NULL);

	node_t = hash_t->array[index];
	while (node_t != NULL)
	{
		if (strcmp(node_t->key, key) == 0)
			return (node_t->value);
		node_t = node_t->next;
	}

	return (NULL);
}
