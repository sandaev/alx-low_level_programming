#include "main.h"

/**
 * print_alphabet_x10 - Prints the aphabets 10 times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char chr;
	int i;

	for (i = 0; i <= 9; i++)
	{	
		for (chr = 'a'; chr <= 'z'; chr++)
		{
			_putchar(chr);
		}
		_putchar('\n');
	}

}
