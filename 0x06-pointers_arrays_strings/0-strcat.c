#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: Pointer to the resulting string.
 */

char *_strcat(char *dest, char *src)
{
	char i, j;

	for (i = 0.; dest[i] != '\0'; i++)

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
