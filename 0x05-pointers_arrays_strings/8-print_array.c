#include "main.h"

/**
* print_array - function that prints n elements of an array of integers
*@a: array
*@n: number of elements
*/

void print_array(int *a, int n)
{
	int m = 0;

	while (m < n)
	{
		if (m != n - 1)
		{
			printf("%d, ", *(a + m));
		}
		else
		{
			printf("%d", *(a + m));
		}
		m++;
	}
	printf("\n");
}
