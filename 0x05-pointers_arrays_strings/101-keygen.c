#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random password
 * for 101-crackme
 * Return: 0
*/
int main(void)
{
	int sum;
	char c;

	srand(tim(NULL));
	while (sum <= 2945)
	{
		c = rand() % 120;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
