#include "main.h"
/**
 * get_bit - Entry Point
 *
 * @n: input of vlaue
 * @index: index
 *
 * Return: 0 index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	return ((n & i) > 0);
}
