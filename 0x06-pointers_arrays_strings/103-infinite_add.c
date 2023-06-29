#include "main.h"

/**
 * infinite_add - add 2 strings.
 * @n1: string1
 * @n2: string2
 * @r: buffer
 * @size_r: buffer size
 * Return: Pointer to the result string on success, NULL if the result does not fit in the buffer.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a_len = 0, b_len = 0;
	int null = 0, a, b, sum, bg;

	while (n1[a_len] != '\0')
		a_len++;
	while (n2[b_len] != '\0')
		b_len++;
	if (a_len > b_len)
		bg = a_len;
	else
		bg = b_len;
	if ((bg + 1) >= size_r)
		return (0);
	r[bg + 1] = '\0';

	while (bg >= 0)
	{
		a = (n1[a_len - 1] - '0');
		b = (n1[b_len - 1] - '0');
		if (a_len > 0 && b_len > 0)
			sum = a + b;
		else if (a_len < 0 && b_len > 0)
			sum = b;
		else if (a_len > 0 && b_len < 0)
			sum = a;
		else
			sum = null;

		if (sum > 9)
		{
			null = sum / 10;
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
	if (*(r) != 0)
		return (r);
	else
		return (r + 1);
}
