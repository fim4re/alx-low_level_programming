#include "search_algos.h"

/**
 * linear_search - searches for a value in a array of integers
 * @array: array of int
 * @size: size of arr
 * @value: to search for
 * Return: -1 if not found
 */


int linear_search(int *array, size_t size, int value)
{
	size_t in;

	if (array == NULL)
		return (-1);
	for (in = 0; in < size; in++)
	{
		printf("Value checked array[%ld] = [%d]\n", in, array[in]);
		if (array[in] == value)
			return (in);
	}
	return (-1);
}
