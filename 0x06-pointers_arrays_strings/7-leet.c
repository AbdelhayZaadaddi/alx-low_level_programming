#include "main.h"

/**
 * leet - change vowels to numbers.
 * @str: analized string.
 *
 * Return: String with all vowels changed.
 */

char *leet(char *str)
{
	char m[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int i;
	int j;

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == m[j])
				str[i] = n[j];
		}
		i++;
	}
	return (str);
}
