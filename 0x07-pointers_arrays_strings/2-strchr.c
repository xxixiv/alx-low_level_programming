#include "main.h"

/**
 * _strchr - prints c
 * @s: pointer
 * @c: char
 * Return: *s;
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
