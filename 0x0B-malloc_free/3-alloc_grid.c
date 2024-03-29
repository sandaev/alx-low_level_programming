#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2D grid
 *
 * @w: Width of array
 * @h: Height of array
 *
 * Return: Pointer to the array
 */
int **alloc_grid(int w, int h)
{
	int **ar, i, j;

	if (w <= 0 || h <= 0)
		return (NULL);
	ar = malloc(h * sizeof(int *));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < h; i++)
	{
		ar[i] = malloc(w * sizeof(int *));
		if (ar[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ar[i]);
			free(ar);
			return (NULL);
		}

	}
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
