#include "main.h"

/**
 * leet - encoding a string
 * @s: pointer
 * Return: *s
 */

char *leet(char *s)
{
	int a;
	int b;
	char c[] = "ol_ea__t";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; c[b] != '\0'; b++)
		{
			if (s[a] == c[b] || s[a] == (c[b] - 32))
			{
				s[a] = b + '0';
			}
		}
	}
	return (s);
}
