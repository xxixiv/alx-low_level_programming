#include <unistd.h>
#include "main.h"
/**
* print_sign - prints the sign of a number
*@f: the number to be checked
* Return: returns 0
*/
int print_sign(int f)
{
if (f > 0)
{
_putchar ('+');
return (1);
}
else if (f == 0)
{
_putchar ('0');
return (0);
}
else if (f < 0)
{
_putchar ('-');
return (-1);
}
return (0);
}
