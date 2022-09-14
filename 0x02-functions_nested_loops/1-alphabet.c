#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * print_alphabet - prints all lowercase letters
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
