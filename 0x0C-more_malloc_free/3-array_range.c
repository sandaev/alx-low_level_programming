#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an orderly array of ints
 * @min: Samllest value of arr
 * @max: Largest value and last element
 * Return: NULL upon failure, otherwise pointer to new array
 */
int *array_range(int min, int max)
{
	int *arr, idx, size;

	if (min > maxx)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (idx = 0; idx < size; idx++)
		arr[idx] = min++;
	return (arr);
}
