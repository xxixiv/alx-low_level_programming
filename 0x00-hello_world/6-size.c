#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char o;
	int p;
	long int q;
	long long int r;
	float s;

	printf("Size of a char: %zu byte(s)\n", sizeof(o));
	printf("Size of an int: %zu byte(s)\n", sizeof(p));
	printf("Size of a long int: %zu byte(s)\n", sizeof(q));
	printf("Size of long long int: %zu byte(s)\n", sizeof(r));
	printf("Size of a float: %zu byte(s)\n", sizeof(s));
	return (0);
}
