#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *@s: first value -char
 *@accept: second value - char
 *
 * Return: char with result
 */

char *_strpbrk(char *s, char *accept)
{
	int n, m;

	for (n = 0; *(s + n); n++)
	{
		for (m = 0; *(accpet + m); m++)
		{
			if (*(s + n) == *(accepet + m))
				break;
		}
		if (*(accepet + m) != '\0')
			return (s + n);
	}
	return (0);
}
