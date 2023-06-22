#include "main.h"

/**
 * main - The prime factors
 *
 * Description: The prime factors
 *
 */

int main(void)
{
	long int num = 612852475143;
	int fct = 2, lrg_fct;

	while (num != 0)
	{
		if (num % fct != 0)
			fct += 1;
		else
		{
			lrg_fct = num;
			num = num / fct;
			if (num == 1)
			{
				printf("%d\n", lrg_fct);
				break;
			}
		}
	}
	return (0);
}
