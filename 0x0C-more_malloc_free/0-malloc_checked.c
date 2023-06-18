#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: int
 *
 * Return: Returns pointer to the allocated memory or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *mem = malloc(b);

	if (mem == 0)
	{
		exit(98);
	}

	return (mem);
}
