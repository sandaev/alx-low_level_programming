#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of
 * a square matrix of integers
 *
 * @a: Pointer to matrix
 * @size : Size of matrix
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, d1, d2;

	d1 = d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i][i];
		d2 += a[i][size - i];
	}

	printf("%d, %d\n", d1, d2);
}

