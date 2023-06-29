#include "main.h"

/**
 * rot13 - change letters to ROT13.
 * @str: analized string.
 * Return: String with all letters in ROT13 base.
 */

char *rot13(char *str)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (str[1] == a[j])
			{
				str[i] = rot[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
