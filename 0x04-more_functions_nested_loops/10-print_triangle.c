#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
*/

void print_triangle(int size)
{
	int head, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (head = 1; head <= size; head++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((head + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
