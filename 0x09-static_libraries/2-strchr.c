#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *@s: the first value
 *@c: second value
 *
 * Return: return to s char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
