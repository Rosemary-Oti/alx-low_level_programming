#include "main.h"

/**
 * _chessboard - A function that prints the chessboard
 * @a: array to be printed
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int n;
	int m;

	for (n = 0; n < 8; n++)
	{
		for (m = 0; m < 8; m++)
			_putchar(a[n][m]);
		_putchar('\n');
	}
}
