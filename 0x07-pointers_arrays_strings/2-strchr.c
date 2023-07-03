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
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
