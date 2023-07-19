#include "main.h"
/**
 * _isalpha - Entry point
 *
 * Description: function _isalpha that checks for alphabetic
 *
 * @c: is a letter
 *
 * Return: if c letter return 1 return 0
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
