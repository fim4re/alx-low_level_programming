#include "search_algos.h"

/**
 *interpolation_search - function that  searches
 *@array: array
 *@size: number of element
 *@value: to search for
 *Return: first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t a, lt, rt;

	if (array == NULL)
		return (-1);

	for (lt = 0, (rt = size - 1); rt >= lt;)
	{
		a = lt + (((double)(rt - lt) / (array[rt] - array[lt])) * (value - array[lt]));
		if (a < size)
		{
			printf("Value checked array [%ld] = [%d]\n", a, array[a]);
		}
		else
		{
			printf("Value checked array [%ld] is out of range\n", a);
			break;
		}

		if (array[a] == value)
			return (a);
		if (array[a] > value)
			rt = a - 1;
		else
			lt = a + 1;
	}
	return (-1);

}
