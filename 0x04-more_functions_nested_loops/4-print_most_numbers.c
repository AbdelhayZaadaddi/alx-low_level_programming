#include "main.h"

/**
 ** _isupper  - checks for uppercase character.
 *
 * @c: function that checks for uppercase character.
 *
 * Return: returns 1 if 'c' is uppercase, 0 (Success)
 */

void print_most_numbers(void)
{
	int num;

	for (num == 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + '0');
	}
	_putchar('\n');
}
