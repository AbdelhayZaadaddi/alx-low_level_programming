#include "main.h"

/**
 ** main - function to check
 *
 *
 * Return: return 0 (Success)
 *
 */

int main(void)
{
	unsigned long a = 1, b = 2, sum = 0;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		unsigned long n = a + b;

		a = b;
		b = n;
	}
	printf("%lu\n", sum);

	return (0);
}
