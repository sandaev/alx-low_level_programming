#include "main.h"

/**
 * is_prime_number - Chekcs if a number is prime
 * @n: Number
 *
 * Return: 1 if prime, 0 otherwise
 */
int isPrime(int, int, int);
int is_prime_number(int n)
{
	int y = 3;
	int c = 0;

	return (isPrime(n, y, c));
}
/**
 * isPrime - A helper function that handles the logic
 * @n: Number
 * @y: Divisor
 * @c: counter
 *
 * Return: 1 if prime, 0 otherwise
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
			isPrime(n, y + 1, c);
		}
	}
	return (isPrime(n, y + 1, c));
}
