#include "main.h"

/**
 * print_diagonal - Draws a straight line in the terminal
 * @n: length of line
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			j = i;
			while (j)
			{
				_putchar(' ');
				j--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
