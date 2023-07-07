#include "main.h"
/**
*  _atoi - convert a string to an integer
*
* @s: string to convert
*
* Return: the converted string
*/

int _atoi(char *s)
{
	int m = 0;
	int sign = 1;
	int f = 0;
	unsigned int r = 0;

	while (*(s + m))
	{
		if (*(s + m) == '-')
			sign *= -1;
		if (*(s + m) >= '0' && *(s + m) <= '9')
		{
			r *= 10;
			r += *(s + m) - '0';
			f = 1;
		}
		else if (f)
			break;
		m++;
	}
	return (sign * r);
}
