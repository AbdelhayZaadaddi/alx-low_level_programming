#include "main.h"
#include <unistd.h>
#include <limits.h>

/**
 * print_binary - print an unsigned int in binary
 * @n: unisgend long int
 */
void print_binary(unsigned long int n)
{
	char p = '0';
	unsigned long int pr = 1ul << 63;

	while (!(pr & n) && pr != 0)
		pr = pr >> 1;

	if (pr == 0)
		write(1, &p, 1);

	while (pr)
	{
		if (pr & n)
			p = '1';
		else
			p = '0';
		write(1, &p, 1);
		pr = pr >> 1;
	}
}
