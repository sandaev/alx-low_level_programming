#include "main.h"
/**
 * flip_bits - returns number of bits of n to flip
 * to get m
 * @n: Integer to flip
 * @m: Expected integer
 * Return: Number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
		{
			flips++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (flips);
}
