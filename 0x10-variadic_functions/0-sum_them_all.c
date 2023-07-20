#include "variadic_functions.h"

/**
 * sum_them_all - Calculates the sum
 *
 * @n: The number of integers to be summed.
 * ...: A variable number of integers to be summed.
 *
 * Return: The sum of all the integers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list val;
	unsigned int x;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(val, n);

	for (x = 0; x < n; x++)
		sum += va_arg(val, int);

	va_end(val);

	return (sum);
}
