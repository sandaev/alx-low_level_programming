#include <stdio.h>
#include "main.h"
/**
 * print_to_98- prints all natural numbers from n to 98.
 *
 * @n: the starting integer.
 *
 * Return: Void. It has no return value.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
				printf(", ");
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if(n > 98)
				printf(", ");
			n--;
		}
	}
	printf("\n");
}
