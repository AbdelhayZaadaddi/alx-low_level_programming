#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		char k = s[j];

		s[j] = s[i - 1];
		s[i - 1] = k;
		j++;
		i--;
	}
}
