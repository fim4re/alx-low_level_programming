#include "main.h"

/**
 * flip_bits - flip to get from nmbr to another
 * @nb: first number
 * @sc: second nbr
 * Return: number to flip
*/
unsigned int flip_bits(unsigned long int nb, unsigned long int sc)
{
	unsigned long int value = nb ^ sc;
	unsigned int cnt = 0;

	while (value)
	{
		if (value & 1ul)
			cnt++;
		value = value >> 1;
	}
	return (cnt);

}
