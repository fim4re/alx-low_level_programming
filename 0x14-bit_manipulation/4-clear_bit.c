#include "main.h"

/**
 * clear_bit - clear bit at index
 * @nb: numbre
 * @index: bit
 *
 * Return: 1 on successful, -1 on error
*/
int clear_bit(unsigned long int *nb, unsigned int index)
{
	if (index >= sizeof(nb) * 8)
		return (-1);

	if (*nb & 1L << index)
		*nb ^= 1L << index;
	return (1);
}
