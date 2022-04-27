#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  to print sum
 * @a:  pointer
 * @size: a size?
 */
void print_diagsums(int *a, int size)
{
	int y, s1 = 0, s2 = 0;

	for (y = 0; y < size; y++)
	{
		s1 += *(a + (size * y + y));
		s2 += *(a + (size * y + size - 1 - y));
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
