#include "main.h"

/**
 * get_endianness - get endianness system
 *
 * Return: 1 small endian, 0 if big
*/
int get_endianness(void)
{
	unsigned long int en = 1;

	return (*(char *)&en);
}
