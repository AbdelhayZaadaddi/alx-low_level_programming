#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - creates an array of integers.
 * @b: input.
 * Return: Output.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
