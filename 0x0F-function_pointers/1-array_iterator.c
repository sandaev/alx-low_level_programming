#include "function.pointers.h"

/**
 * array_iterator - Executes a function on each element of
 * an array.
 * @array: Given array
 * @size: Size of array
 * @action: Pointer to the function to be executed
 *
 * Return: Nothing
 */
void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++, array++)
	{
		action(*array);
	}
}
