#include "main.h"

/**
* print_buffer - prints a buffer 10 bytes
*
* @b: buffer to print
* @size: size of buffer
*
*/

void print_buffer(char *b, int size)
{
	int m = 0, n;

	for (; m < size; m += 10)
	{
		printf("%08x: ", m);
		for (n = 0; n < 10; n++)
		{
			if (n % 2 == 0 && n != 0)
				printf(" ");
			if (m + n < size)
				printf("%02x", b[m + n]);
			else
				printf("  ");
		}
		printf(" ");
		for (n = 0; n < 10; n++)
		{
			if (m + n >= size)
				break;
			if (b[m + n] >= 32 && b[m + n] <= 126)
				printf("%c", b[m + n]);
			else
				printf(".");
		}
		if (m >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
