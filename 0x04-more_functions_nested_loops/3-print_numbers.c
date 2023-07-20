#include "main.h"

/**
 * print_numbers - print 0 to 9
 *
 * Return: always 0
*/
void print_numbers(void)
{
	int n = 0;

	for (n = 0, n <= 9, n++)
	{
		_putchar(n + 48);
	}
	_putchar('\n');
}
