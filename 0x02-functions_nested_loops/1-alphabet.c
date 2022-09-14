#include "main.h"
/**
 * print_alphabet - Prints all alphabets in lowecase
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}

	_putchar('\n');
}
