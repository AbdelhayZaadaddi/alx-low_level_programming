#include "main.h"
/**
* _strcpy - copies the string pointed to by src, including the terminating
*
* @dest: pointer to the buffer in which we copy the string
* @src: pointer to the string to be copied
*
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int m;

	m = 0;
	while (*(src + m))
	{
		*(dest + m) = *(src + m);
		m++;
	}
	*(dest + m) = *(src + m);
	return (dest);
}
