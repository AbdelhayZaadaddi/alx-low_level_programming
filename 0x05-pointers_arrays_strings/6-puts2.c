#include "main.h"

/**
* puts2 - prints every other character of a string
* character, followed by a new line
* @str: string to be printed
*/

void puts2(char *str)
{
	int x;

	while (*(str + x) != '\0')
	{
		if (x % 2 == 0)
			_putchar(*(str + x));
		i++;
	}
	_puchar('\n');
}
