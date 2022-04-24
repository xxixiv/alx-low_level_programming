#include "main.h"

/**
 * string_toupper - changing cases in a string
 * @s: pointer 
 *
 * Return: *s
 */

char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] -= 32;
	}
	return (s);
}
