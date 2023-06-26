#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int l = strlen(s);
	int i, j;

	for (i = 0, j = l - 1; i < j; i++; j--)
	{
		char t = s[i];

		s[i] = s[j];
		s[j] = t;
	}
}
