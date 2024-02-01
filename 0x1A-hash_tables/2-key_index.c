#include "hash_tables.h"

/**
 * key_index - Get the index a key
 * @key: key to get the index
 * @size: size of the array of the hash
 *
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
		return (hash_djb2(key) % size);
}
