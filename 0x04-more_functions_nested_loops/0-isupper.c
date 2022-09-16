#include <unistd.h>
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
	int num;
	char i;

	for (i = 'A'; i <= 'Z'; i++)
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
	return (num);
}

