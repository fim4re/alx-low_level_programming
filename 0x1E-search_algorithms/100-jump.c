#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array
 *
 * @array: array
 * @size: size of the arr
 * @value: to search in
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int indx, a, b, prev;

	if (array == NULL || size == 0)
		return (-1);

	a = (int)sqrt((double)size);
	b = 0;
	prev = indx = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", indx, array[indx]);

		if (array[indx] == value)
			return (indx);
		b++;
		prev = indx;
		indx = b * a;
	} while (indx < (int)size && array[indx] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, indx);

	for (; prev <= indx && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
