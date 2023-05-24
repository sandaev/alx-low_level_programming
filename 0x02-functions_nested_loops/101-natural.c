#include "main.h"
#include <stdio.h>
#define MAX 1024
/**
 * main - Computes sum of multiples of 3 and 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int total, num;

	total = 0;
	for (num = 1; num < MAX; num++)
	{
		if (!(num % 3) || !(num % 5))
		{
			total += num;
		}
	}
	printf("%d\n", total);

	return (0);
}
