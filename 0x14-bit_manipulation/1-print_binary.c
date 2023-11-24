#include "main.h"
/**
 * print_binary - prints binary representation of
 * an integer
 *
 * @n: Integer
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int bin, i;
	unsigned long int tmp;

	tmp = n;
	bin = 1;
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n == 1)
	{
		_putchar('1');
	}
	else
	{
		while (1)
		{
			i = bin & 1;
			switch (i)
			{
				case 0:
					_putchar('0');
					break;
				case 1:
					_putchar('1');
					break;
			}
			n >>= 1;
			bin = n;
			if (n == 1)
			{
				i = tmp & 1;
				switch (i)
				{
					case 0:
						_putchar('0');
						break;
					case 1:
						_putchar('1');
						break;
				}
				break;
			}
		}
	}
}
