#include "main.h"

/**
 * swap_int - function that swap values for two int
 * @a:swap num
 * @b: swap num2
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
