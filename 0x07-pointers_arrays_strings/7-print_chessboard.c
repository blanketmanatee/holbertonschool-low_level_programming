#include "holberton.h"

/**
 * print_chessboard - prints a chessboard
 * @a: pointer
 */

void print_chessboard(char (*a)[8])
{
	int y, x;

	y = 0;

	while (y < 8)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[y][x]);
			if (x == y)
				_putchar('\n');
		}
		y++;
	}
}
