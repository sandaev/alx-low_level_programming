#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - finds the natural sqaure root of numbers
 *
 * @n: The number whose square root is to be determined
 *
 * Return: 1 if true and 0 if otherwise
 */
int _sqrt_recursion(int n)
{
	int y = 2;

	return (divide(n, y));
}
/**
 * divide - A helper function that handles the logic
 *
 * @n: argument passed to _sqrt_recursion
 *
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
	else
	{
		divide(n, y + 1);
	}
	;
}
