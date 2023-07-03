#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *@s: first value of char
 *@accept: second value of char
 * Return: char with result
 */

int _strspn(char *s, char *accept)
{
	int n;
	int m;

	for (n = 0; *(s + n); n++)
	{
		for (m = 0; *(accept + m); m++)
		{
			if (s[n] == accept[m])
				break;
			if (accept[m] == '\0')
				break;
		}
	}
	return (n);
}
