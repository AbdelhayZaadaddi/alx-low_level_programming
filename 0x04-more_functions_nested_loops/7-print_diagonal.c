#include "main.h"

/**
 ** print_diagonal  - function that draws a straight line
 *
 * @n:  number of times the character
 *
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; j < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar(36);
		_putchar('\n');
	}
}
