#include <unistd.h>

/**
 * _putchar - print the character c
 * @c: the character
 *
 * Return: 1 on success, or overwise
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
