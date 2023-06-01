#include "main.h"

/**
 * swap - swaps element of array
 * @i: index
 * @j: index
 * @a: Array of integers
 * Return: Nothing
 */
void swap(int *a, int i, int j)
{
	int tmp;

	tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
}

/**
 * reverse_array - Reverses the content of an integer
 * @a: Pointer to array
 * @n: Size of array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		swap(a, i, (n - i - 1));
	}
}
