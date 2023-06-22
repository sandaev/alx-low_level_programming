#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of
 * an array
 *
 * @array: Given array
 *
 * @size: size of array
 *
 * @action: Pointer to the function to be execuated
 */
void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		action(*array);
		array++;
		i++;
	}
}
