#include "main.h"
/**
 * print_triangle - prints triangle on the terminal
 *
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	k = size;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
	
			while (k > 0)
			{
				_putchar(' ');
				k--;
			}
			_putchar('#');
		}
		_putchar('\n');
		k =- 1;
	}
	_putchar('\n');
}	
