#include "main.h"

/**
 * reverse_array - reversing the array
 * @a : pointer 1
 * @n : pointer 2
 */

void reverse_array(int *a, int n)
{
	int p;
	int q;
	int r;

	p = 0;
	q = n - 1;

	while (p < q)
	{
		r = a[p];
		a[p] = a[q];
		a[q] = r;
		p++;
		q--;
	}
}
