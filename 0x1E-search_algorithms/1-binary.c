#include "search_algos.h"

/**
 * binary_search - searches for a value in a arr of integers
 * @array: array of int
 * @size: size of arr
 * @value: to search for
 * Return: index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{

	size_t j, lt, rt;

	if (array == NULL)
		return (-1);

	for (lt = 0, rt = size - 1; rt >= lt;)
	{
		printf("Searching in array: ");
		for (j = lt; i < rt; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[]);

		j = lt + (rt - lt) / 2;
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			rt = j - 1;
		else
			lt = j + 1;
	}

	return (-1);
}
