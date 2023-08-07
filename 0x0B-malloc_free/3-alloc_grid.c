#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to 2d array
 *
 * @width: Row size
 * @height: Column size
 *
 * Return: NULL upon failure
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int h, w;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		arr[h] = malloc(sizeof(int) * width);

		if (arr[h] == NULL)
		{
			for (; h >= 0; h--)
			{
				free(arr);
			}
			free(arr);
			return (NULL);
		}
	}

	for (h  = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			arr[h][w] = 0;
		}
	}

	return (arr);
}
