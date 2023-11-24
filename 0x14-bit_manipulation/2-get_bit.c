#include "main.h"

/**
 * get_bit - get the bit of the index
 * @nb: number
 * @index: bit
 *
 * Return: bit state or -1
 */
int get_bit(unsigned long int nb, unsigned int index)
{
	if (index >= sizeof(nb) * 8)
		return (-1);

	return (nb >> index & 1);
}
