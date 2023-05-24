#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints to 98
 * @n: Integer to print from
 *
 *
 * Return: Nothing
 */

void print_to_98(int n)
{
	if (n <= 0 || (n > 0 && n < 98))
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			/*printf(", ");*/
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n -= 1;
		}
	}
	printf("\n");
}
