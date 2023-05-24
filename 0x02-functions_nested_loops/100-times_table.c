#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints n times table starting from 0
 *
 * @n: Integer
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int row, col;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				if (col > 0)
					printf("%3d", row * col);
				else
					printf("%d", row * col);
				if (col < n)
					printf(", ");
			}
			printf("\n");
		}
	}
}
