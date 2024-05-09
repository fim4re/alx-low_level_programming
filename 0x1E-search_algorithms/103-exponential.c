#include "search_algos.h"

/**
  * _binary_search - Searches for a value in a sorted array
  * @array: array to search.
  * @left: The starting index
  * @right: The ending index
  * @value: to search for.
  * Return: If the value is not present or the array is NULL, -1.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t a;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (a = left; a < right; a++)
			printf("%d, ", array[a]);
		printf("%d\n", array[a]);

		a = left + (right - left) / 2;
		if (array[a] == value)
			return (a);
		if (array[a] > value)
			right = a - 1;
		else
			left = a + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array
  * @array: array to search.
  * @size: elements in the array.
  * @value: to search for.
  * Return: If the value is not present or the array is NULL, -1.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t a = 0, rt;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (a = 1; a < size && array[a] <= value; a = a * 2)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	}

	rt = a < size ? a : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", a / 2, rt);
	return (_binary_search(array, a / 2, rt, value));
}
