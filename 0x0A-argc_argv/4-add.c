#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Description: This function calculates the sum
 *
 * Return: 0 (indicating successful execution)
 */

int main(int argc, char *argv[])
{
	int n = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		n = n + atoi(argv[i]);
	}
	printf("%d\n", n);
	return (0);
}
