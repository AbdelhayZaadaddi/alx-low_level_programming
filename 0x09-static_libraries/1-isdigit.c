#include "main.h"

/**
 ** _isdigit  - checks for uppercase character.
 *
 * @c: function that checks for a digit (0 through 9).
 *
 * Return: returns 1 if 'c' is uppercase, 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
