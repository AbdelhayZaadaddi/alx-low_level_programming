#include "main.h"

/**
 * _plus - eturns the length of a string
 * @str: string
 *
 */
void _plus(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
