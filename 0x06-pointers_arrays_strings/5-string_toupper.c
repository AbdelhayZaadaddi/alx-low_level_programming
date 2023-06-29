#include "main.h"

/**
 * string_toupper - change lowercase letters to uppercase.
 * @str: analized string.
 *
 * Return: String with all letters Uppercased.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
