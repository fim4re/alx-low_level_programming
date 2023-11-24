#include "main.h"

/**
 * set_bit - set the bit at index
 * @nb: number
 * @index: bit
 *
 * Return: -1 on error, 1 on successful
 */
int set_bit(unsigned long int *nb, unsigned int index)
{
	if (index >= sizeof(nb) * 8)
		return (-1);

	return (!!(*nb |= 1L << index));
}
