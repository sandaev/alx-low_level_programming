#include "main.h"
/**
 * times_table- prints 9 times table starting from 0.
 *
 * Return: Void hence no return value
 */
void times_table(void)
{
	char row, col;

	for (row = '0'; row <= '9'; row++)
	{
		for (col = '0'; col <= '9'; col++)
		{
			_putchar(row * col);
			if (col < '9')
				_putchar(',');
			_putchar(' ');
		}
	}
}
