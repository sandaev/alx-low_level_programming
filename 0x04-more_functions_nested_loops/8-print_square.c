#include "main.h"

/**
 * print_square - Prints a square
 * @size: Square size
 * Return: Nothing
 */

void print_square(int size)
{
	int length, height;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 0; height < size; height++)
		{
			for (length = 0; length < size; length++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
