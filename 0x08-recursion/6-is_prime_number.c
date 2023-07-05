#include "main.h"

/**
 * is_prime_number - fuction that check if the number is a prime.
 *
 * @n: the number
 *
 * Return: return 0 if n < 2.
*/

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	prime_number(n, 2);
}

/**
 * prime_number - fuction that check if the number is a prime.
 *
 * @n: the number
 * @i: the test number
 *
 * Return: prime_number(n, i + 1)
*/
int prime_number(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_number(n, i + 1));
}
