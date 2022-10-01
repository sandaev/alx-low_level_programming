#include "main.h"
/**
 * _print_num - prints num using _poutchar
 *
 *
 * @num: Integer to be printed
 *
 * Return: Nothing
 */
void _print_num(int num)
{
	/* The base case */
	if (num != 0)
	{
		/* Recursion */
		_print_num(num / 10);
		_putchar(((num % 10) + '0'));
	}
}

