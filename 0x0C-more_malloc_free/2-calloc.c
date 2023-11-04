#include "main.h"
#include<stdlib.h>
/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of array members
 * @size: Size in bytes of each memeber
 * Return: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
	return (ptr);
}
