#include "main.h"

/**
 * _sqrt_recursion -  function that returns the natural square.
 *
 * @n: the value of the number.
 *
 * Return: -1 if n<0.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqr_root(n, 0));
}

/**
 * actual_sqr_root - calclute the actual sqr.
 *
 * @n: the number.
 * @i: the number to kno if the nuber has sqr.
 *
 * Return: actual_sqr_root(n, i + 1).
*/

int actual_sqr_root(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqr_root(n, i + 1));
}
