#include "hash_tables.h"

/**
 * hash_table_delete - Delete hash table.
 * @hash_t: pointer a hash table.
*/
void hash_table_delete(hash_table_t *hash_t)
{
	hash_node_t *node_t, *node_tmp;
	unsigned long int j;
	hash_table_t *h = hash_t;

	for (j = 0; j < hash_t->size; j++)
	{
		if (hash_t->array[j] != NULL)
		{
			node_t = hash_t->array[j];
			while (node_t != NULL)
			{
				node_tmp = node_t->next;
				free(node_t->key);
				free(node_t->value);
				free(node_t);
				node_t = node_tmp;
			}
		}
	}
	free(h->array);
	free(h);
}
