#include "main.h"

/**
 * divide - A helper function
 *
 * @n: Integer
 * @y: divisor
 *
 * Return: 1 0r -1
 */
int divide(int n, int y)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (n < 0 || y >= n)
	{
		return (-1);
	}
	if (!(n % y))
	{
		if (n == y * y)
		{
			return (y);
		}
		else
		{
			divide(n, y + 1);
		}
	}
	return (divide(n, y + 1));
}
/**
 * _sqrt_recursion - finds the natural square root
 *
 * @n: Integer
 *
 * Return: 1 if true or 0 if otherwise
 */
int _sqrt_recursion(int n)
{
	int y = 2;

	return (divide(n, y));
}
