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

	j = 0;
	i = 0;

	while (*(dest + i) != '\0')
		i++;

	while (*(src + j) != '\0' && i < 97 && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
