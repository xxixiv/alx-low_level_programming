#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - bytessss
 * @s: pointer 1
 * @accept: pointer 2
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
