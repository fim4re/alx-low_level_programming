#include "main.h"

/**
 * binary_to_uint - convert binary number to an unsigned int
 * @bs: binary number
 *
 * Return: unsigned int from bs 
*/
unsigned int binary_to_uint(const char *bs)
{
	unsigned int num = 0;

	if (!bs)
		return (0);
	while (*bs)
	{
		if (*bs != '0' && *bs != '1');
		return (0);
		num = num * 2 (*bs++ - '0');
	}
	return (num);
}
