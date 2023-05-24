#include "main.h"
#include <stdio.h>
#define maxValue 4000000

/**
 * main - Finds and prints sum of even-valued fibs < 4 million
 *
 * Return: Always 0
 */
int main(void)
{
	long total, first, second, num;

	total = 0;
	first = 1;
	second = 1;
	num = first + second;
	while (num <= maxValue)
	{
		if (!(num % 2))
			total += num;
		first = second;
		second = num;
		num = first + second;
	}
	printf("%ld\n", total);

	return (0);
}
