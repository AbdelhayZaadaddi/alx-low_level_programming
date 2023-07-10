#include "main.h"

/**
 * argstostr - concatenate all arguments
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: NULL memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
	char *brc, *rml;
	int arg, size;

	if (!ac || !av)
		return (NULL);

	for (arg = 0, size = 1; arg < ac; ++arg, ++size)
	{
		for (rml = av[arg]; *rml; ++rml, ++size)
		{
		}
	}

	brc = (char *) malloc(sizeof(char) * size);

	if (!brc)
		return (NULL);

	for (arg = 0, size = 0; arg < ac; ++arg, ++size)
	{
		for (rml = av[arg]; *rml; ++rml, ++size)
			brc[size] = *rml;
		brc[size] = '\n';
	}

	brc[size] = '\0';

	return (brc);
}
