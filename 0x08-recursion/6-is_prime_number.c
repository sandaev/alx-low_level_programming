#include "main.h"
/**
 * is_prime_number - Checks if a number is prime
 *
 * @n: Number to be checked
 *
 * Return: 1 if number is prime otherwise 0
 */
int is_prime_number(int n)
{
	/* Declare and initialize variable */
	int y = 3;
	int c = 0;

	/* call helper function */
	return (isPrime(n, y, c));
}
/**
 * isPrime - A helper function that handles the logic
 *
 * @n: number to be tested
 *
 * @y: Divisor
 *
 * @c: counter
 *
 * Return: 1 if prime , 0 otherwise
 */
int isPrime(int n, int y, int c)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}
	if (n == 2 || n == 3)
	{
		return (1);
	}
	if (!(n % y))
	{
		c++;
		if (y == n && c == 1)
		{
			return (1);
		}
		else if (c > 1)
		{
			return (0);
		}
		else
		{
			isPrime(n, y + 1);
		}
	}
}
