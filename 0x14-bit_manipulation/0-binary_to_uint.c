#include "main.h"

/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, y = 1;
	unsigned int rest = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	while (i >= 0)
	{
		rest += ((b[i] - '0') * y);
		y *= 2;
		i--;
	}
	return (rest);
}
