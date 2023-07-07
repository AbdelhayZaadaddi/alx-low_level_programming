#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Description: This function calculates the minimum number of coins required
 *
 * Return: 0 (indicating successful execution)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int n = 0, m = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	while (m > 0)
	{
		if (m - 25 >= 0)
		{
			m = m - 25;
		}
		else if (m - 10 >= 0)
		{
			m = m - 10;
		}
		else if (m - 5 >= 0)
		{
			m = m - 5;
		}
		else if (m - 2 >= 0)
		{
			m = m - 2;
		}
		else if (m - 1 == 0)
		{
			m = m - 1;
		}
		n++;
	}
	printf("%d\n", n);
	return (0);
}
