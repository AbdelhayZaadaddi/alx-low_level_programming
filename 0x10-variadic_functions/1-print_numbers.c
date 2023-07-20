#include "variadic_functions.h"

/**
 * print_numbers - Prints a variable number of integers
 *
 * @separator: The string used to separate the printed integers.
 * @n: The number of integers to be printed.
 * ...: A variable number of integers to be printed.
 *
 * Description: This function prints a variable number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list val;
	unsigned int i;

	va_start(val, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(val, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(val);
}
