#include "main.h"

/**
 * print_triangle  - function that draws a diagonal line
 *
 * @size: number of times the character
 *
 */

void print_triangle(int size)
{
	int i, j, s;

	for (i = 0; i < size; i++)
	{
		for (s = size - i - 1; s > 0; s--)
			_putchar(' ');
		for (j = 0; j <= i; j++)
			_putchar('#');
		if (size >= 0)
			_putchar('\n');
		if (size <= 0)
			_putchar('\n');
		_putchar('\n');
	}
}
