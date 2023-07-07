#include "main.h"

/**
 ** _isupper  - checks for uppercase character.
 *
 * @c: function that checks for uppercase character.
 *
 * Return: returns 1 if 'c' is uppercase, 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
