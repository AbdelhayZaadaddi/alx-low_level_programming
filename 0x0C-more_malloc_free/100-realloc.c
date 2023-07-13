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
	char *p;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	if (ptr == NULL)
		return (p);

	p = memcpy(p, ptr, (new_size > old_size ? old_size : new_size));
	free(ptr);
	return (p);
}
