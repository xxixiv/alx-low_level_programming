#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: is a matrix
*/

void print_chessboard(char (*a)[8])
{
	int y, z;

	for (y = 0; y < 8; y++)
	{
		for (z = 0; z < 8; z++)
		{
			_putchar(*(*(y + a) + z));
		}
	_putchar('\n');
	}
}
