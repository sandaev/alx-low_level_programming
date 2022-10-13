#include "function_pointers.h"
/**
 * int_index - Searches for an integer
 *
 * @array: Array
 *
 * @size: Size of array
 *
 * @cmp: Searching function
 *
 * Return: Integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	/* Varaiable  Declaration */
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
