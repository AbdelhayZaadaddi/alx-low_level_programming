#include "main.h"

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	m = n;

	if (m / 10)
		print_number(m / 10);

	_putchar(m % 10 + '0');
}
