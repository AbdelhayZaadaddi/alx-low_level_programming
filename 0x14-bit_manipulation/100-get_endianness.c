#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	int i = 1;

	return (*((char *) &i) + '0');
}
