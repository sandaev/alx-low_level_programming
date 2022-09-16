#include <unistd.h>
#include "main.h"
/**
 * print_most_numbers- Prints numbers from 0 to 9
 * and skips 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
