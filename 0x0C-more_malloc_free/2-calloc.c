#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array, using malloc
 *
 * @nmemb: Number of elements
 *
 * @size: Size of each elements in bytes
 *
 * Return: Pointer to void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* Declare variables */
	char *arr;
	unsigned int i;

	/* Check arguments */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/* Allocate memory */
	arr = malloc((nmemb * size));
	if (arr == NULL)
	{
		return (NULL);
	}
	/* Initialize array with 0 */
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
