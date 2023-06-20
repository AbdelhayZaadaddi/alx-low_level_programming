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

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; hr < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(';');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
