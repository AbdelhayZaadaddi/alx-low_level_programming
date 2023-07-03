#include "main.h"

/**
 * print_chessboard - function that locates a substring.
 * @a: first value char
 *
 */

void print_chessboard(char (*a)[8])
{
	int n;
	int m;

	for (n = 0; n < 8; n++)
	{
		for (m = 0; m < 8; m++)
		{
			putchar(a[n][m]);
		}
		putchar('\n');
	}
}
