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

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0' && i < 97)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
