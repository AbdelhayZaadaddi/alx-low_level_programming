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
	int a, b;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3 == 0) || (b % 5 == 0))
			b += a;
	}
	printf("%d\n", b);

	return (0);
}
