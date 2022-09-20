#include "main.h"
#include <stdio.h>
/**
 * print_array- prints array of integrers, followed by a new line
 *
 * @a: pointer to array of int
 *
 * @n: Size of array
 *
 * Return : Void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d, ", *(a + i));
		}
		else
		{
			printf("%d", *(a + i));
		}
	}
	printf("\n");
}
