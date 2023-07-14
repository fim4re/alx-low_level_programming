#include <stdio.h>

/**
 * main - Entry point
 * Description: print combination of single-digit
 * Return: always 0
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar(', ');
	return (0);
}
