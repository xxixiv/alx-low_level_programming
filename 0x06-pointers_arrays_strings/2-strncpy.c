#include "main.h"

/**
 * _strncpy - char
 * @dest : pointer1
 * @src : pointer 2
 * @n : int
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[a] = src[a];
	}

	for ( ; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
