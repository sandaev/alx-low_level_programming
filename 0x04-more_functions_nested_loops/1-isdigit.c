#include <unistd.h>
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: digit to check
 * Return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
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
}		
