#include "main.h"

/**
 ** jack_bauer - function to check
 *
 *
 * Return: returns 1 if 'c' is lowercase, 0 (Success)
 *
 */

void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; hr <= 59; min++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
