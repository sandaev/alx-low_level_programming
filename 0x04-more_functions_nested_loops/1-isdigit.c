#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: digit to check
 * Return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	int i, num;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			num = 1;
		}
		else
		{
			num = 0;
		}
	}
	_putchar('\n');
	return (num);
}
