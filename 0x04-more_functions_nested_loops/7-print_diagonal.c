#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: is the number of times print \
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
}
