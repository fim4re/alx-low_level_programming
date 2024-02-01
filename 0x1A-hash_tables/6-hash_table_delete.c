#include "hash_tables.h"

/**
 * hash_table_delete - Delete hash table.
 * @hash_t: pointer a hash table.
*/
void hash_table_delete(hash_table_t *hash_t)
{
	hash_node_t *node, *node_tmp;
	unsigned long int j;
	hash_table_t *head = hash_t;

	for (j = 0; j < hash_t->size; j++)
	{
		if (hash_t->array[j] != NULL)
		{
			node = hash_t->array[j];
			while (node != NULL)
			{
				node_tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = node_tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
