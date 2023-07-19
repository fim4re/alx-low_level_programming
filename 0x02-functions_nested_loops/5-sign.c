#include "main.h"

/**
 * print_sign - Entry point
 * Description: function print the signe of a number
 * @n: is a number
 * Return: if n > 0 return 1 if n = 0 return 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 48)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}

}
