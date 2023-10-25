#include "main.h"
/**
 * _div - Helper function
 *
 * @d: Divisor
 * @n: Dividened
 *
 * Return: Root
 */
int _div(int n, int d)
{
	if (d * d == n)
		return (d);

	if (d == n / 2)
		return (-1);

	++d;
	return (_div(n, d));
}
/**
 * _sqrt_recursion - Returns the natural square root of n
 *
 * @n: Integer
 *
 * Return: 1 upon success, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	int d;

	d = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (_div(n, d));
}
