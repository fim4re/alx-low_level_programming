#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: print a qoute using write function
 *	write(int fd.const void *buf.size_t count)
 *
 * Return: Always 1 (success)
*/

int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
