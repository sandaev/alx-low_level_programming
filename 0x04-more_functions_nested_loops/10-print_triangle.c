#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Prints a triangle
 *
 * @size: Size
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int h, l, c;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		for (h = 0; h < size; h++)
		{
			c = size - h - 1;
			while (c)
			{
				printf(" ");
				c--;
			}
			for (l = h + 1; l > 0; l--)
			{
				printf("#");
			}
			printf("\n");
		}
	}
}
