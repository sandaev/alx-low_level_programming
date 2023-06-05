#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_chessboard - Prints chessboard
 *
 * @a: Pointer to  pointer of characters to print
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	char ch;

	j = 0;
	while (j < 8)
	{
		i = 0;
		while (i < 8)
		{
			ch = a[j][i];
			if (i == 7)
			{
				_putchar(ch);
				_putchar('\n');
			}
			else
				_putchar(ch);
			i++;
		}
		j++;

	}
}
