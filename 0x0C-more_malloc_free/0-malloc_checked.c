#include "main.h"
#include <stdlib.h>
#include <limits.h>

/*
 * malloc_checked - Allocates memory using malloc and checks for allocation errors
 *
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory block
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL) {
		exit(98);
	}
	return (ptr);
}
