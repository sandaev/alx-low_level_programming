#include "main.h"
/**
 * _isupper- checks for uppercase
 *
 * @c: the character to be tested
 *
 * Return: 1 if c is upper 0 otherwise
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	_putchar('\n');
}

