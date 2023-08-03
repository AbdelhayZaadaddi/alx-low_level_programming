#include <unistd.h>

/**
 * _putchar - Writes a character
 * @c: The character to be written
 *
 * Return: On success
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}

