#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: Size of array
 * @c: Character
 *
 * Return: Pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	arr = malloc(size * sizeof(char));

	if (arr == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < (int) size; i++)
	{
		arr[i] = c;
	}
	arr[i] = '\0';

	return (arr);
}
