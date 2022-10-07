#include "main.h"
/**
 *_calloc - Allocates memory for an array, using malloc
 *
 * @nmemb: Number of elements
 *
 * @size: Size of each elements in bytes
 *
 * Return: Pointer to void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
}
