#include "main.h"

/**
 * largest_number - return the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (b > c || c < a)
			largest = a;
		else
			largest = c;

	}
	else if (b > a)
	{
		if (a > c || c < b)
			largest = b;
		else
			largest = c;
	}
	else if (c > a)
	{
		if (a > b || b < c)
			largest = c;
		else
			largest = b;
	}

	return (largest);
}
