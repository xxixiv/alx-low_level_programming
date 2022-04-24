#include "main.h"
#include <stdio.h>

/**
 * *cap_string - capping strings, no cap
 * @s: pointer
 *
 * Return: *s
 */

char *cap_string(char *s)
{
	int a, b;
	char seperators[] = " \t\n,;.!?\"(){}";

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
				for (b = 0; delimeters[b] != '\0'; b++)
					if (s[a] == delimeters[b] && s[a + 1] >= 97 && s[a + 1] <= 122)
						s[a + 1] = s[a + 1] - 32;
	}
	return (s);
}
