#include "main.h"

/**
 * print_numbers - Prints from 0 - 9
 *
 * Return: Nothing
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
