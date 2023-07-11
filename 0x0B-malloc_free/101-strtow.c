#include "main.h"

/**
 * strtow - concatenates all the arguments
 *@str: string
 *@av: argument
 * Return: a pointer to a new string
 */
char **strtow(char *str)
{
	int n = 0, w = 0, j = 0, l, count = 0, m, word;
	char **p;
	char *u;

	count = 0;
	if (*str == '\0' || str == NULL || strcmp(str, " ") == ' ')
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] == ' ' && (str[n + 1] != ' ' || str[n + 1] == '\0'))
			w++;
	}
	p = (char **)malloc((w + 1) * sizeof(char *));
	if (p == NULL)
	{
		return (NULL);
	}
	for (word = 0; str[word] && j <= w; word++)
	{
		count = 0;
		if (str[word] != ' ')
		{
			for (n = word ; str[n] != '\0'; n++)
			{
				if (str[n] == ' ')
				{
					break;
				}
				count++;
			}
			*(p + j) = (char *)malloc((count + 1) * sizeof(char));
			if (*(p + j) == NULL)
			{
				for (l = 0; l <= j; l++)
				{
					u = p[l];
					free(u);
				}
				free(p);
				return (NULL);
			}
			for (m = 0; word < n; word++)
			{
				p[j][m] = str[word];
				m++;
			}
			p[j][m] = '\0';
			j++;
		}
	}
	p[j] = NULL;
	return (p);
}
