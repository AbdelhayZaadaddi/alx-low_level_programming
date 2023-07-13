#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - allocates memory block using malloc and free
 * @ptr: pointer to the memory previosly allocated with malloc
 * @old_size: The size of the allocated space of ptr
 * @new_size: The new size to allocate
 *
 * Return: A pointer to the new allocated memory and free ptr.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
	}
	else if (new_size <= old_size)
	{
		new_ptr = ptr;
	}
	else
	{
		new_ptr = malloc(new_size);
		if (new_ptr != NULL)
		{
			memcpy(new_ptr, ptr, old_size);
			free(ptr);
		}
	}
	return (new_ptr);
}
