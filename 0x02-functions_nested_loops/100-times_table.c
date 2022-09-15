#include <stdio.h>
#include "main.h"
/**
 * print_times_table- prints n times table starting from 0.
 *
 * @n: the number whose table to print
 *
 * Return: Void no return value.
 */
void print_times_table(int n)
{
	int row, col;

	if (n >= 0  && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				printf("%d", row * col);
				
				if (col < n)
					printf("%3s", ",");
			}
			printf("\n");
		}
	}
}
