#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 * Return: address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, p, q, m, n;

	for (i = 0; n1[i]; i++)
		;
	for (j = 0; n2[j]; j++)
		;
	if (i > size_r || j > size_r)
		return (0);
	m = 0;
	for (i -= 1, j -= 1, p = 0; p < size_r - 1; i--, j--, p++)
	{
		n = m;
		if (i >= 0)
			n += n1[i] - '0';
		if (j >= 0)
			n += n2[j] - '0';
		if (i < 0 && j < 0 && n == 0)
		{
			break;
		}
		m = n / 10;
		r[p] = n % 10 + '0';
	}
	r[p] = '\0';
	if (i >= 0 || j >= 0 || m)
		return (0);
	for (p -= 1, q = 0; q < p; p--, q++)
	{
		m = r[p];
		r[p] = r[q];
		r[q] = m;
	}
	return (r);
}
