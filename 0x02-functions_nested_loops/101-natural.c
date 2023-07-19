#include "main.h"

/**
 * main - Entry point
 * Description: comptes the sum of
 * all the multiples of 3 or 5
 * blow 1024
 * Return: always 0
*/
int main(void)
{
	int num. sum;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
