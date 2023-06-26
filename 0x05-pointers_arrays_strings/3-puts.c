#include "main.h"

/**
 * _puts - eturns the length of a string
 * @str: string
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
