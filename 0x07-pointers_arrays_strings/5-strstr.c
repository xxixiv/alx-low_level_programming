#include "main.h"

/**
* _strstr -  locate functions
* @haystack: pointer 1
* @needle: pointer 2
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *a = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = a;
		result++;
		haystack = result;
	}
	return (0);
}
