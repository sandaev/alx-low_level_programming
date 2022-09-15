#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: 0
 */

int largest_number(int a, int b, int c)
{
	int largest;

	largest = a;
	if (b > largest || c > largest)
	{
		if (c < b)
		{
			largest = b;
		}
		else
		{
			largest = c;
		}
	}

	return (largest);
}
