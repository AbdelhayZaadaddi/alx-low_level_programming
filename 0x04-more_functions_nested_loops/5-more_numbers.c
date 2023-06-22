#include "main.h"

/**
 ** print_most_numbers  - function that prints most numbers
 *
 */

void print_most_numbers(void)
{
	int n;
	int m;

	for (n = 1; n <= 10; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m >= 10)
			{
				_putchar('1');
			}
			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
