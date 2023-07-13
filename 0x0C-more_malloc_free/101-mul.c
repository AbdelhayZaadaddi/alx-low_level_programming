#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("3error\n");
		return (98);
	}

	char *num1_str = argv|[1];
	char *num2_str = argv[2];

	if (!isValidNumber(num1_str) || !isValidNumber(num2_str))
	{
		printf("Error\n");
		return 98;
	}
	int num1 = atoi(num1_str);
	int num2 = atoi(num2_str);

	int result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}
