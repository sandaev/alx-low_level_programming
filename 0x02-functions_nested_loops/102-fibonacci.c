#include "main.h"
#include <stdio.h>
#define MAX 50
/**
 * main - Prints the first 50 fibonacci starting wit 1 and 2
 *
 *
 * Return: Nothing
 */
int main(void)
{
	long first, second, i, num;

	first = 1;
	second = 2;
	printf("%ld, %ld, ", first, second);

	for (i = 2; i < MAX; i++)
	{
		num = first + second;
		printf("%ld", num);
		first = second;
		second = num;
		if (i < MAX - 1)
			printf(", ");
	}
	printf("\n");

	return (0);
}
