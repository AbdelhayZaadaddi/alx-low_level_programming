#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - array of integers.
 * @min: input min.
 * @max: input max.
 *
 * Return: array.
 */

int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = (int *)malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
