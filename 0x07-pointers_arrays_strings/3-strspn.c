#include "main.h"
/**
* _strspn - Getting length of the prefixing sub-string
* @s: String
* @accept: Substring
* Return: Length
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	char *b = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				a++;
				break;
			}
		if (!(*--accept))
			break;
		accept = b;
	}
	return (a);
}
