#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * at a given index
 *
 * @n: pointer to number
 * @index: index of bit
 * Return: 1 on success; -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *ptr = n;

	*ptr = *ptr & (~(1 << index));
	if (*ptr)
	{
		return (1);
	}
	return (-1);
}
