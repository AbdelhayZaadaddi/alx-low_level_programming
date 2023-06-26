#include "main.h"
/**
* puts_half - prints half of a string
*
* @str: string to be printed
*/

void puts_half(char *str)
{
	int l = 0;
	int k = 0;

	while (*str)
	{
		l++;
		str++;
	}
	if (l % 2 == 0)
	{
		k = l / 2;
	}
	else
	{
		k = (l + 1) / 2;
	}
	str -= l;
	while (*(str + k))
	{
		putchar(*(str + k));
		str++;
	}
	putchar('\n');
}
