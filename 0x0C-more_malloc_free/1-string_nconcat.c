#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - prints concatenate string;
* @s1: input string.
* @s2: input string.
* @n: len s2 string for print.
* Return: Nothing.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int str1 = strlen(s1);
	unsigned int str2 = strlen(s2);

	if (n > str2)
		n = str2;

	char *result = malloc((str1 + n + 1) * sizeof(char));

	if (result == NULL)
	{
		exit(98);
	}

	strncpy(result, s1, str1);
	strncpy(result + str1, s2, n);
	result[str1 + n] = '\0';

	return (result);
}
