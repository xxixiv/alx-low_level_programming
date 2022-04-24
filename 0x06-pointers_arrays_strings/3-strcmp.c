#include "main.h"

/**
 * _strcmp - used to compare
 * @s1 : pointer 1
 * @s2 : pointer 2
 * Return: *dest
 */

int _strcmp(char *s1, char *s2)
{
	int a;
	int b;

	a = 0;

	while (s1[a] == s2[a] && (s1[a] != '\0' || s2[a] != '\0'))
	{
		a++;
	}
	b = s1[a] - s2[a];
	return (b);
}
