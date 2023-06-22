#include "main.h"

/**
 * print_diagonal  - function that draws a straight line
 *
 * @n:  number of times the character
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < 1; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar(36);
			_putchar('\n');
		}
	}
}
