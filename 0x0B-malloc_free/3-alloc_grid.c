#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2D grid
 *
 * @width: Width of array
 *
 * @height: Heoght of array
 *
 * Return: Pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **ar, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ar = malloc((height * sizeof(int)));
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		ar[i] = malloc(width * sizeof(int));
	}
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	return (ar);
}
