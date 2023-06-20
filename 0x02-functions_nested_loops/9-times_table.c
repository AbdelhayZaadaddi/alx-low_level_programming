#include "main.h"

/**
 ** times_table - function to check
 *
 * Description: cheks input of function
 *
 */

void times_table(void)
{
	int n, m, p;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			p = n * m;

			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + 48);
			_putchar((p % 10) + 48);
		}
		_putchar('\n');
	}
}
