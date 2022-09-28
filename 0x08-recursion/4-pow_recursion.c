#include "main.h"
/**
 * _pow_recursion - returns power of a number
 *
 * @n: base number
 *
 * @y: index
 *
 * Return: n raiesd to power n
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
