#include "main.h"

/**
 * _strstr - function that locates a substring.
 *@haystack: first value char
 *@needle: second value  char
 *
 * Return: char with result
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *hey = haystack;
		char *need = needle;

		while (*hey && *need && (*hey == *need))
		{
			hey++;
			need++;
		}
		if (*need == '\0')
		{
			return ((char *)haystack);
		}
		haystack++;
	}
	return (0);
}
