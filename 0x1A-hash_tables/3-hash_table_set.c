#include "hash_tables.h"

/**
 * hash_table_set - update an element in a hash table.
 * @hash_t: hash table.
 * @key: key to add
 * @value: value
 *
 * Return: failure - 0 Otherwise - 1.
*/
int hash_table_set(hash_table_t *hash_t, const char *key, const char *value)
{
	hash_node_t *tmp;
	char *new_val;
	unsigned long int index, j;

	if (hash_t == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new_val = strdup(value);
	if (new_val == NULL)
		return (0);

	index = key_index((const unsigned char *)key, hash_t->size);
	for (j = index; hash_t->array[j]; j++)
	{
		if (strcmp(hash_t->array[j]->key, key) == 0)
		{
			free(hash_t->array[j]->value);
			hash_t->array[j]->value = new_val;
			return (1);
		}
	}
	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
	{
		free(new_val);
		return (0);
	}
	tmp->key = strdup(key);
	if (tmp->key == NULL)
	{
		free(tmp);
		return (0);
	}
	tmp->value = new_val;
	tmp->next = hash_t->array[index];
	hash_t->array[index] = tmp;

	return (1);
}
