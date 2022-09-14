#include "main.h"
/**
 * print_alphabet_x10 - Prints lowercase letters 10 times
 *
 * Return: No return value
 */
void print_alphabet_x10(void)
{
	int i;
	char alph;

	i = 0;
	while (i < 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}

		_putchar('\n');
		i++;
	}
}
