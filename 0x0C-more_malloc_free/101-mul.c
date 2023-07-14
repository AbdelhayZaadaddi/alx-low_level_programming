#include <stdio.h>
#include <stdlib.h>
unsigned long _atoi(char *s);
/**
 * mul - a function that multiplies two integers.
 * @a: first integer
 * @b: second integer
 * Return: the result of the multiplication
 */
unsigned int mul(unsigned int a, unsigned int b)
{
	return (a * b);
}
/**
 * isDgt - a function that checks if a buffer has only digits.
 * @buffer: buffer that will be tested.
 * Return: 0 if a non-digit was found, 1 otherwise
 */
int isDgt(char *buffer)
{
	int add = 0;

	while (buffer[add] != '\0')
	{
		if (!(buffer[add] >= '0' && buffer[add] <= '9'))
			return (0);

		add++;
	}

	return (add);
}

/**
 * main - a program that multiplies two numbers.
 * @argc: count of arguments given to the programs
 * @argv: arguments given to the program.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	char *strBuf;
	char *strBuf2;
	int nbr1, nbr2;
	unsigned int result, val1, val2;

	if (argc < 3)
	{
		printf("Error\n");
		return (98);
	}

	strBuf = argv[1];
	strBuf2 = argv[2];
	nbr1 = isDgt(strBuf);
	nbr2 = isDgt(strBuf2);

	if ((nbr1 == 0) || (nbr2 == 0))
	{
		printf("Error\n");
		return (98);
	}
	val1 = _atoi(strBuf);
	val2 = _atoi(strBuf2);
	result = mul(val1, val2);
	printf("%d\n", result);
	return (0);
}
/**
 * _atoi - convert a string to an integer
 *
 * @s: string to convert
 *
 * Return: the converted string
 */
unsigned long _atoi(char *s)
{
	int i = 0, sign = 1, found = 0;
	unsigned int res = 0;

	while (*(s + i))
	{
		if (*(s + i) == '-')
		{
			sign *= -1;
		}
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			res *= 10;
			res += *(s + i) - '0';
			found = 1;
		}
		else if (found)
			break;
		i++;
	}
	return (res * sign);
}
