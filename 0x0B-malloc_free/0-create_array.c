#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Create an array of characters
 *
 * @size: Size of array
 * @c: Character
 *
 * Return: Pointer to array
 */
char *create_array(unsigned int size, char c)
{
	/* Declalartion */
	unsigned int i;
	char *ar;

	/* Allocate memory */
	ar = malloc(size * sizeof(char));
	if (size == 0 || ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	ar[i] = '\0';
	return (ar);
}
