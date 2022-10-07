#include "main.h"
#include <stdlib.h>
/**
 * array_range - Create an array of integers
 *
 * @min: Lower limit of integer
 *
 * @max: Upper limit of integer
 *
 * Return: Pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *adr, size, i, j;

	size = (max - min) + 2;
	if (min > max)
	{
		return (NULL);
	}
	adr = malloc(size * sizeof(int));
	if (adr == NULL)
	{
		return (NULL);
	}
	for (i = min, j = 0; i <= max; i++, j++)
	{
		adr[j] = i;
	}
	return (adr);
}
