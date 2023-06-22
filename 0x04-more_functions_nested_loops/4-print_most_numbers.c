#include "main.h"

/**
 ** print_most_numbers  - function that prints the numbers
 *
 * Description: function that prints the numbers
 *
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
