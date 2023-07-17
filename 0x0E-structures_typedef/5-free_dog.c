#include <stdlib.h>
#include "goh.h"

/**
 * free_dog - initialize a variable
 * @d: dog's details
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
