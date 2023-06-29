#include "main.h"

/**
 * print_number - print an int.
 * @n: number tested
 *
 */

void print_number(int n)
{
	int i, j, d, ds, p;
	unsigned int t, c, m;

	d = 0;
	if (n < 0)
	{
		_putchar('-');
		t = -n;
	}
	else
	{
		t = n;
	}
	m = t;

	while (m >= 10)
	{
		m = m / 10;
		d++;
	}
	ds = d + 1;
	p = 1;
	i = 1;

	while (i < ds)
	{
		p = p * 10;
		i++;
	}
	j = p;
	while (j >= 1)
	{
		c = (t / j) % 10;
		_putchar(c + 48);
		j = j / 10;
	}
}
