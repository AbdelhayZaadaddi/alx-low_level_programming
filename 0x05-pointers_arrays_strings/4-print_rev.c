#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 */

void print_rev(char *s)
{
	char *st = s;


	while (*st != '\0')
	{
		st++;
	}
	st--;
	while (st >= s)
	{
		putchar(*st);
		st--;
	}
	putchar('\n');
}
