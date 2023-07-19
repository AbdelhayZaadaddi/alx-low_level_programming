#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Executes a given action on each element of an array.
 *
 * @array: Pointer to the integer array.
 * @size: The size of the array.
 * @action: A function pointer to the action function.
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
