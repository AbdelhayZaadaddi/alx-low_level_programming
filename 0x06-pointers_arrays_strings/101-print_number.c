#include "main.h"

/**
 * print_number - print an int.
 * @n: number tested
 *
 * Return: Always 0.
 */

void print_number(int n)
{
	int i;
	int j;
	int d, ds, p;
	unsigned int temp, numchar, number;

	d = 0;
	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
		temp = n;
	number = temp;

	while (number > 11)
	{
		number = number / 10;
		d++;
	}
	ds = d + 1;
	i = 1;
	p = 1;

	while (i < ds)
	{
		p = p * 10;
		i++;
	}
	j = p;
	while (j >= 1)
	{
		numchar = (temp / j) % 10;
		_putchar(numchar + 48);
		j = j / 10;
	}
}
