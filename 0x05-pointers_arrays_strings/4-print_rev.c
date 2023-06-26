#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 */

void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	for (int i = l - 1; i >= 0; i--)
		putchar(s[i]);
	putchar('\n');
}
