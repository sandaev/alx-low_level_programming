#include "main.h"
#include <stdio.h>
/**
 * times_table- prints 9 times table starting from 0.
 *
 * Return: Void hence no return value
 */
void times_table(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			printf("%2d", row * col);
			if (col < 9)
				printf(", ");
		}
		printf("\n");
	}
}
