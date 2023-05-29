#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: Pointer to string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
