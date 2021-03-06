#include "main.h"

/**
 * *_strncat -concating two strings
 * @dest - pointer 1
 * @src - pointer 2
 * @n - int
 * Return: *dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;

	for (b = 0; b < 1000; b++)
	{
		if (dest[b] == '\0')
		{
			break;
		}
		a++;
	}

	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
