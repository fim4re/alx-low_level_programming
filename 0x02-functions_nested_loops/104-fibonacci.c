#include "main.h"
#include <stdio.h>

/**
 * num_length - return the length
 *
 * @num: input number
 *
 * Return: number of digits
*/
int num_length(int num)
{
	int length = 0;

	if (!num)
		return (1);

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}
/**
 * main - Entry point
 *
 * Description: prints the first 98 fibonacci numbers
 * starting with 1 and 2 followed by new line
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int count, initial;
	unsigned long f1 = 1, f2 = 2, sum, max = 100000000,
		      f1o = 0, f2o = 0, sum_o = 0;

	for (count = 1; count <= 98; count++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initial = num_length(max) - 1 - num_length(f1);

		while (f1o > 0 && initial > 0)
		{
			printf("%d", 0);
			initial--;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % max;
		sum_o = f1o + f2o + (f1 + f2) / max;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sum_o;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
