#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n, bytes;
	int (*ptr)(int, char **) = &main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (n = 0; n < bytes; n++)
		printf("%02x%c", *((unsigned char *)ptr + n), n < bytes - 1 ? ' ' : '\n');
	return (0);
}
