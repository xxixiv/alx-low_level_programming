#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: success = 1, failure = -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j;

	if (index > 63)
		return (-1);

	j = 1 << index;

	if (*n & j)
		*n ^= j;

	return (1);
}
