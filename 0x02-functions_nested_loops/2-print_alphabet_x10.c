#include <unistd.h>
#include "main.h"

/**
* print_alphabet_x10 - prints the alphabets 10 times
*
* Return: returns 0
*/

void print_alphabet_x10(void)
{
char alphabet;
int i;
for (i = 1; i <= 10; i++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar (alphabet);
}
_putchar ('\n');
}
}
