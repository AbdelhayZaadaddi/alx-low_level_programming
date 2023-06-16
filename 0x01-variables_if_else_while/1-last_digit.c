#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("The string Last digit of %d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("The string Last digit of %d and is 0\n", n);
	}
	else if (n < 6 && n != 0)
	{
		printf("The string Last digit of %d and is less than 6 and not a 0\n", n);
	}
}
