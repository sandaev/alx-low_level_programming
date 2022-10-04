#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 *
 * @size: size of array
 *
 * @c: character to be initilized with
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	/* Declare variables */
	unsigned int i;
	char *ar;

	/* Allocate memory for array */
	ar = malloc(size * sizeof(char));
	/* If size is 0 or cannot allocate memory, return 1 */
	if (size == NULL || ar == NULL)
	{
		return (NULL);
	}
	/* Initialize array with c */
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	/* Add null byte to array */
	ar[i] = '\0';
	return (ar);
}
