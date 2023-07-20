#include "main.h"
/**
 * more_numbers - print 10 times the numbers
 * from 0 to 14
 * Return: always 0
*/
void more_numbers(void)
{
	int row, count;

	for (row = 0; row < 10; row++)
	{
		for (count = 0; count < 15; count++)
		{
			if (count >= 10)
				_putchar(count / 10 + '0');
			_putchar(count % 10 + '0');
		}
		_putchar('\n');
	}
}
