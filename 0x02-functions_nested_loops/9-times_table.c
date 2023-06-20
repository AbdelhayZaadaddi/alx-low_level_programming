#include "main.h"

/**
 ** times_table - function to check
 *
 * Description: cheks input of function
 *
 */

void times_table(void)
{
	int num, num2, mul;

	for (num = 0; num <= 9; num++)
	{
		putchar(48);
		for (num2 = 1; num2 <= 9; num2++)
		{
			_putchar(',');
			_putchar(' ');

			mul = num * num2;

			if (mul <= 9)
				_putchar(' ');
			else
				_putchar((mul / 10) + 48);
			_putchar((mul % 10) + 48);
		}
		_putchar('\n');
	}
}
