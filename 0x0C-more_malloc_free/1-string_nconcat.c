#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* string_nconcat - prints concatenate string;
* @s1: string 1
* @s2: string 2
* @n: len s2 string for print.
* Return: Nothing.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m;
	unsigned int i;
	unsigned int u;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	m = 0;
	while (s1[m])
		m++;

	ptr = malloc(sizeof(*ptr) * m + n + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0, u = 0; i < (m + n); i++)
	{
		if (i < m)
		{
			ptr[i] = s1[i];
		}
		else
		{
			ptr[i] = s2[u++];
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
