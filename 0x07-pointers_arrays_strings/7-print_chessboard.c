#include "main.h"
/**
 * print_chessboard - prints chessboard
 *
 * @a: pointer to 2D array
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	char c;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			c = a[i][j];
			_putchar(c);
		}
		if (j == 7)
		{
			_putchar('\n');
		}

	}
}
