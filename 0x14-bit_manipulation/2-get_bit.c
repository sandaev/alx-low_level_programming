#include "main.h"
/**
 * get_bit - Returns the bit of a number at
 * given index
 *
 * @n: Number
 * @index: Index
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bits;

	bits = (n >> index) & 1;
	if (bits == 0 || bits == 1)
	{
		return (bits);
	}
	return (-1);
}
