#include "main.h"
/**
 * print_alphabet_x10 - Prints lowercase letters 10 times
 *
 * Return: No return value
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		print_alphabet();
		i++;
	}
	_putchar('\n');
}
