#include "main.h"
/**
 * puts_half - Prints ha;f of a string, followed by a new line
 *
 * @str: String to be printed(half)
 *
 * Return: Void
 */
void puts_half(char *str)
{
	int len, i;

	len = 0;

	/* Get length of string */
	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}
	/* Check if length is even or not and execute the appropriate code */
	if (!(len % 2))
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		for (i = ((len - 1) / 2 + 1); i < len; i++)
		{
			_putchar(*(s + i));
		}
	}
	_putchar(*(str + i));
}
