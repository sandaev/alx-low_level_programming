#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse
 * @s: The string to be printed
 *
 * Return: Nothing
 */
void _prev_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
