#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Searches for an integer in an array and returns its index.
 *
 * @array: Pointer to the integer array to be searched.
 * @size: The size of the array.
 * @cmp: A function pointer to the comparison function.
 *
 * Return: The index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
