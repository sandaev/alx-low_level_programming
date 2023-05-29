#include "main.h"

/**
 * puts2 - Prints every other character of a string
 *
 * @str: Pointer to string
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		if (*(str + 1) == '\0')
			break;
		str += 2;
	}
	_putchar('\n');
}
