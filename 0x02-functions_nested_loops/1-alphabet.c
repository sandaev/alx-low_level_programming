#include "main.h"

/**
 * print_alphabet - Prints the alphabets in lowercase
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		_putchar(chr);
	_putchar('\n');
}
