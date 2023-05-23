#include "main.h"

/**
 * _abs - Computes absolute value of an integer
 *
 * @n: Integer
 * Return: The absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
