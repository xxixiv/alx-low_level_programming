#include <stdio.h>

/**
* main - Prints the sum of even-valued Fibonacci sequence
*        terms not exceeding 4000000.
*
* Return: Always 0.
*/
int main(void)
{
unsigned long a1 = 0, a2 = 1, fsum;
float total_sum;

while (1)
{
fsum = a1 + a2;
if (fsum > 4000000)
break;

if ((fsum % 2) == 0)
total_sum += fsum;

a1 = a2;
a2 = fsum;
}
printf("%.0f\n", total_sum);

return (0);
}
