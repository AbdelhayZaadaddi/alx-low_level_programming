#include "main.h"

/**
 * _strdup - Duplicates a string
 * @str: The string to be duplicated
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int lenght, i;

	if (str == NULL)
	{
		return (NULL);
	}
	lenght = 0;
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	copy = malloc((lenght + 1) * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= lenght; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
