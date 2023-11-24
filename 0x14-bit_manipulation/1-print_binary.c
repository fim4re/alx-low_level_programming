#include "main.h"

/**
 * print_binary - print number as binary
 * @nb: number
 *
 * Return: void
*/
void print_binary(unsigned long int nb)
{
	int bit = sizeof(nb) * 8, prt = 0;

	while (bit)
	{
		if (nb & 1L << --bit)
		{
			_putchar('1');
			prt++;
		}
		else if (prt)
			_putchar('0');
	}
	if (!prt)
		_putchar('0');
}
