#include "main.h"

/**
 * _pow_recursion - Returns power of a number
 * @n: Base number
 * @y: Index
 *
 * Return: Integer
 */
int _pow_recursion(int n, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (n);
	}
	else
	{
		return (n * _pow_recursion(n, y - 1));
	}
}
