#include "main.h"

/**
 ** print_sign - function to check
 *
 * @n: cheks input of function
 *
 * Return: returns 1 if '+' return 0 if '0' return -1 if '-' (Success)
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
