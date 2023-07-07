#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Description: This function multiplies two command-line arguments
 *
 * Return: 0 (indicating successful execution) if two arguments are provided
 */

int main(int argc, char *argv[])
{
	int i = argc - 1;
	int j = i - 1;
	int res;

	if (i == 2)
	{
		res = atoi(argv[i]) * atoi(argv[j]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
