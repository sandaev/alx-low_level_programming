#include "main.h"
/**
 * factorial - Factorial of n
 *
 * @n: Integer
 *
 * Return: The factorial of n on success, -1 otherwise.
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
