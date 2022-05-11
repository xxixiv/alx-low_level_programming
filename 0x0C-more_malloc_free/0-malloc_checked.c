#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocating memory
 * @b: value of bytes
 * Return: pointer to the malloc_checked
 *
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
