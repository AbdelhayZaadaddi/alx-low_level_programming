#include "search_algos.h"

/**
 * linear_search - search for a value in an array
 * using linear search algorithm
 * @array: poinetr to the first element of the array to search
 * @value: the value to search
 * @size: size of the array
 *
 * Return: the index if successful, -1 otherwise
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}

