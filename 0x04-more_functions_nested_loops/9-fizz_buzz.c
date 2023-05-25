#include "main.h"
#include <stdio.h>

/**
 * main - Implementation of FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3))
		{
			if (!(i % 5))
			{
				printf("FizzBuzz");
			}
			else
			{
				printf("Fizz");
			}
		}
		else if (!(i % 5))
		{
			if (i % 3)
			{
				printf("Buzz");
			}
			else
			{
				printf("FizzBuzz");
			}
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
