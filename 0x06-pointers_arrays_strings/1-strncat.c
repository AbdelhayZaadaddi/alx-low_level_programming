#include "main.h"

/**
 * _strncat - Concatenates n characters from the source string.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to be concatenated.
 *
 * Return: Pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (i = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
	}
	dest[i + j] = src[j];
	return (dest);
}
