#include "main.h"

/**
 * _abs - Entry point
 *
 * Description: function that computes the absolute
 * value of a integer
 * @i: interger
 * Return: absolute value
*/

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
