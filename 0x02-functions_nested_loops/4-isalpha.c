#include <unistd.h>
#include <ctype.h>
#include "main.h"
/**
* _isalpha - checks if a character is an alphabet
*
* @f: the character to be checked
* Return: returns 1 if the character is an alphabet and 0 otherwise
*/
int _isalpha(int f)
{
if ((f >= 65 && f <= 90) || (f >= 97 && f <= 122))
{
return (1);
}
else
{
return (0);
}
}
