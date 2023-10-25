#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised to power y recursively
 *
 * @x: Base number
 * @y: Index
 *
 * Return: Power if x > 0, -1 otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	--y;
	return (x * _pow_recursion(x, y));
}
