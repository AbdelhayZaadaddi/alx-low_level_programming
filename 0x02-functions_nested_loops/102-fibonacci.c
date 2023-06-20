#include "main.h"

/**
 ** main - function to check
 *
 * Description:  prints the first 50 Fibonacci numbers
 *
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	unsigned long a = 1, b = 2, s;
	int c;

	printf("%lu, %lu", a, b);
	for (c = 3; c <= 50; c++)
	{
		s = a + b;
		printf(", %lu", s);
		a = b;
		b = s;
	}
	printf("\n");

	return (0);
}
