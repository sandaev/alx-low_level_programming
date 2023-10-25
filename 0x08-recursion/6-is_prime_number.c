#include "main.h"
/**
 * _fact_num - Helper function that fsctorises the integer
 *
 * @n: Integer
 * @div: The divisor
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int _fact_num(int n, int div)
{
	if (n % div == 0 && div != n && div != 1)
		return (0);
	if (div == 0 || n == 1 || n < 0)
		return (0);
	if (n % div == 0 && div == n)
		return (1);
	++div;
	return (_fact_num(n, div));
}
/**
 * is_prime_number - Test is a number is prime.
 * @n: Integer
 *
 * Return: Always.
 */
int is_prime_number(int n)
{
	int c, res;

	c = 1;

	res = _fact_num(n, c);

	return (res);
}
