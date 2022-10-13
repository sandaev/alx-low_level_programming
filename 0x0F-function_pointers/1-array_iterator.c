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
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	i = 0;
	while (i < size)
	{
		action(aray[i]);
		i++;
	}
}
