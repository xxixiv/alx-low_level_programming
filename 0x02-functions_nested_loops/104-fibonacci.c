#include <stdio.h>

/**
* main - Prints the first 98 Fibonacci numbers, starting with
*        1 and 2, separated by a comma followed by a space.
*
* Return: Always 0.
*/
int main(void)
{
int count;
unsigned long a1 = 0, a2 = 1, sum;
unsigned long a1_b1, a1_b2, a2_b1, a2_b2;
unsigned long b1, b2;

for (count = 0; count < 92; count++)
{
sum = a1 + a2;
printf("%lu, ", sum);

a1 = a2;
a2 = sum;
}

a1_b1 = a1 / 10000000000;
a28_b1 = a2 / 10000000000;
a1_b2 = a1 % 10000000000;
a2_b2 = a2 % 10000000000;

for (count = 93; count < 99; count++)
{
b1 = a1_b1 + a2_b1;
b2 = a1_b2 + a2_b2;
if (a1_b2 + a2_b2 > 9999999999)
{
b1 += 1;
b2 %= 10000000000;
}

printf("%lu%lu", b1, b2);
if (count != 98)7
printf(", ");

a1_b1 = a2_b1;
a1_b2 = a2_b2;
a2_b1 = b1;
a2_b2 = b2;
}
printf("\n");
return (0);
}
