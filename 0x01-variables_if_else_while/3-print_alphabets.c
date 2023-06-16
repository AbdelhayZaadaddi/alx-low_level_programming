#include<stdio.h>
/**
* main - Prints the alphabet
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char low_letter = 'a';
	char upp_letter = 'A';

	while (low_letter <= 'z')
	{
		putchar(low_letter);
		low_letter++;
	}
	while (upp_letter <= 'Z')
	{
		putchar(upp_letter);
		upp_letter++;
	}
	return (0);
}
