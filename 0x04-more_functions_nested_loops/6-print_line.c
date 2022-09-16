#include <unistd.h>
#include "main.h"
/**
 * print_line- draws a straightline in the terminal
 *
 * @n: determines line length
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
