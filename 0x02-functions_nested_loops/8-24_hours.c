#include "main.h"

/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: no return
*/

void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
					_putchar((a / 10) + 48);
					_putchar((a % 10) + 48);
					_putchar(':');
					_putchar((b / 10) + 48);
					_putchar((b % 10) + 48);
					_putchar('\n');
		}
	}
}
