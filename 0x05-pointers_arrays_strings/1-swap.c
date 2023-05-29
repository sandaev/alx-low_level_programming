#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: Pointer to integer
 * @b: Pointer to integer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
