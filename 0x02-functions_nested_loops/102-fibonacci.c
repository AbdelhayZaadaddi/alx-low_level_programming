#include "main.h"

/**
 ** main - function to check
 *
 *
 * Return: returns 0 (Success)
 *
 */

int main(void)
{
	int c;
	unsigned long a = 0, b = 1, s;

	for (c = 0; c < 50; c++)
	{
		s = a + b;
		printf("%lu", s);

		a = b;
		b = s;

		if (c == 49)
			printf("\n");
		else
			printf(", ");

		return (0);
	}
}
