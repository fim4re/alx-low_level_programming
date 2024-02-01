#include "hash_tables.h"

/**
 * hash_table_print - Print a hash table.
 * @hash_t: pointer to the hash table
 *
*/
void hash_table_print(const hash_table_t *hash_t)
{
	hash_node_t *node_t;
	unsigned long int j;
	unsigned char comma = 0;

	if (hash_t == NULL)
		return;

	printf("{");
	for (j = 0; j < hash_t->size; j++)
	{
		if (hash_t->array[j] != NULL)
		{
			if (comma == 1)
				printf(", ");

			node_t = hash_t->array[j];
			while (node_t != NULL)
			{
				printf("'%s': '%s'", node_t->key, node_t->value);
				node_t = node_t->next;
				if (node_t != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
