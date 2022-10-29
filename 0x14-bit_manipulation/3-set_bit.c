#include "main.h"
/**
 * set_bit - sets the value of a  bit to 1
 * at a given index
 *
 * @n: pointer to number
 * @index: index to set
 * Return: 1 on success, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *ptr = n;

	*ptr = (1 << index) | *ptr;
	if (*ptr)
	{
		return (1);
	}
	return (-1);
}
