#include "main.h"
/**
 * times_table- prints 9 times table starting from 0.
 *
 * Return: Void hence no return value
 */
void times_table(void)
{
	char row, col;

	for (row = 48; row <= 57 row++)
	{
		for (col = 48; col <= 57; col++)
		{
			_putchar(row);
			_putchar(row*col);
			if (col < 57)
				_putchar(',');
		}
	}
}
