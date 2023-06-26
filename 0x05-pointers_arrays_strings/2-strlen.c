#include "main.h"

/**
 * _strlen - eturns the length of a string
 * @s: length
 * Return: length
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		c++;

	return (c);
}
