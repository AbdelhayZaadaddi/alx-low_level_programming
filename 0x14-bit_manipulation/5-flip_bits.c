#include "main.h"

/**
 * flip_bits - flip to get from one number to another
 *
 * @n: input
 * @m: bits
 *
 * Return: sum of bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			sum++;
		m = m >> 1;
		n = n >> 1;
	}
	return (sum);
}
