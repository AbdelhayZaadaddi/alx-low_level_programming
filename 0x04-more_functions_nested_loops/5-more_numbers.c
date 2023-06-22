#include "main.h"

/**
 ** more_numbers  - function that prints most numbers
 *
 */

void more_numbers(void)
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
			_putchar(m % 10 + 48);
		}
		_putchar('\n');
	}
}
