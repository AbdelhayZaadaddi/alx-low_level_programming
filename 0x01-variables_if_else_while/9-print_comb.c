#include <stdio.h>
/**
 * main - Prints the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int N;

	for (N = 0; N < 10; N++)
	{
		putchar(N + '0');
		if (N != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
