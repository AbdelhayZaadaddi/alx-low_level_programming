#include "main.h"

/**
 ** print_times_table - function to check
 *
 *@n: number
 *
 */

void print_times_table(int n)
{
	int p, m, l;

	if (n <= 15 && n >= 0)
	{
		for (l = 0; l <= n; ++l)
		{
			_putchar(48);
			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');

				p = l * m;

				if (p <= 9)
					_putchar(' ');
				if (p <= 99)
					_putchar(' ');
				if (p >= 100)
				{
					_putchar((p / 100) + 48);
					_putchar((p / 10) % 10 + 48);
				}
				else if (p <= 99 && p >= 10)
					_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
