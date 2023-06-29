#include "main.h"

/**
 * infinite_add - Add two strings representing large numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: Pointer to the result string on success, NULL if the result does not fit in the buffer.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a_len = 0, b_len = 0, null = 0, a, b, sum, bg;

	while (n1[a_len] != '\0')
		a_len++;
	while (n2[b_len] != '\0')
		b_len++;
	if (a_len > b_len)
		bg = a_len;
	else
		bg = b_len;
	if ((bg + 1) >= size_r)
		return (NULL);
	r[bg + 1] = '\0';

	while (bg >= 0)
	{
		a = (a_len > 0) ? (n1[a_len - 1] - '0') : 0;
		b = (b_len > 0) ? (n2[b_len - 1] - '0') : 0;
		if (a_len > 0 && b_len > 0)
			sum = a + b;
		else if (a_len > 0 && b_len < 0)
			sum = a;
		else if (a_len < 0 && b_len > 0)
			sum = b;
		else
			sum = null;

		if (sum > 9)
		{null = sum / 10;
			sum = (sum % 10) + '0';
		}
		else
		{
			null = 0;
			sum = sum + '0';
		}
		r[bg] = sum;
		a_len--;
		b_len--;
		bg--;
	}

	if (*r != '\0')
		return (r);
	else
		return (r + 1);
}
