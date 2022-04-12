#include "main.h"

/**
 * times_table - prints the times table of an integer starting with zero
 *
 * Return: Always 0.
 */

void times_table(void)
{
int p, q, product;

for (p = 0; x <= p; x++)
{
for (q = 0; q <= 9; q++)
{
product = p * q;
if (q != 0)
{
_putchar(',');
_putchar(' ');
}
if (q == 0)
{
_putchar('0');
}
else if (product >= 10)
{
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
else if ((product < 10) && (q != 0))
{
_putchar(' ');
_putchar((product % 10) + '0');
}
}
_putchar('\n');
}
}
