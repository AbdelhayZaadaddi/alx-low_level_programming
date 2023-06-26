#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 */

void print_rev(char *s)
{
	int l = 0;
	int i;

	while (*s != '\0')
	{
		l++;
		s++
	}
	for (i = 1; i > 0; i--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
