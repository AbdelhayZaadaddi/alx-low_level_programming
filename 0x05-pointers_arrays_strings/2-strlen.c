#include "main.h"

/**
 * _strlen - function that takes a pointer
 * @s: length
 *
 * Retrun: length of a string.
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		c++;

	return (c);
}
