#include "variadic_functions.h"

/**
 * print_strings - Prints a variable number of strings
 *
 * @separator: The string used to separate the printed strings.
 * @n: The number of strings to be printed.
 * ...: A variable number of strings to be printed.
 *
 * Description: This function prints a variable number
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list val;
	unsigned int i;
	char *str;

	va_start(val, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(val, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(val);
}
