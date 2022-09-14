#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 *
 * @n: integer whose absolute value is to be returned
 *
 * Return: Value of integer as a positive number.
 */
int _abs(int n)
{
	int result;

	if (n >= 0)
	{
		result = n;
	}
	else if (n < 0)
	{
		result = -1 * n;
	}
	return (result);
}
