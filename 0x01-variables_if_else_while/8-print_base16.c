#include <stdio.h>
/**
 * main - Prints all the numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int letter;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (letter = 0; letter < 6; letter++)
	{
		putchar(letter + 'a');
	}
	putchar('\n');

	return (0);
}
