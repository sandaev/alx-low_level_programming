#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array
 * @size: Size of array
 * @cmp: Function pointer
 *
 * Return: Integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	/* Declaration */
	int i;

	if (size <= 0)
		return (-1);
	i = 0;
	while (i < szie)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
