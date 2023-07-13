#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _calloc - prints calloc;
* @nmemb: input string.
* @size: input string.
* Return: Pointer.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, total_size);
	return (ptr);
}
