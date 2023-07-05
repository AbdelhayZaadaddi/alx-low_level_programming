#include "main.h"

/**
 * is_palindrome - function that returns 1 if a string is a palindrome.
 *
 * @s: the string
 *
 * Return: return the is palindrome recursive
*/
int is_palindrome(char *s)
{
	int leng = get_length_recursive(s, 0);

	return (is_palindrome_recursive(s, 0, leng - 1));
}

/**
 * get_length_recursive - calclute the lenght
 *
 * @p: the string
 * @leng: the lenght
 *
 * Return: return to lenght
*/

int get_length_recursive(char *p, int leng)
{
	if (*p == '\0')
	{
		return (leng);
	}

	return (get_length_recursive(p + 1, leng + 1));
}

/**
 * is_palindrome_recursive - check if the string is palindrome.
 *
 * @s: the string
 * @i: the first value
 * @j: the second value
 *
 * Return: return 0.
*/

int is_palindrome_recursive(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	if (*(s + i) != *(s + j))
	{
		return (0);
	}

	return (is_palindrome_recursive(s, i + 1, j - 1));
}
