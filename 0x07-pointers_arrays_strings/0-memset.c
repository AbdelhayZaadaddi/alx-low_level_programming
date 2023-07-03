#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: the first value
 * @b: the second value
 * @n: the thrue value
 *
 * Return: return to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
