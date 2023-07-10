#include "main.h"
#include <string.h>

/**
 * argstostr - Concatenates all the arguments into a single string
 * @ac: The number of arguments
 * @av: The array of arguments
 *
 * Return: A pointer to the concatenated string.
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	int total_length = 0;

	for (int i = 0; i < ac; i++)
		total_lenght += strlen(av[i]) + 1;
	char *result = (char *)malloc(total_length + 1);

	if (result == NULL)
		return (NULL);
	int position = 0;

	for (int i = 0; i < ac; i++)
	{
		strcpy(result + position, av[i]);
		position += strlen(av[i]);
		result[position++] = '\n';
	}
	result[total_length] = '\0';
	return (result);
}
