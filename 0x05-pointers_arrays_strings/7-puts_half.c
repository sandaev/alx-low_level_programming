#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to char
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *(s + len) != '\0'; len++)
	{
		;
	}
	return (len);
}


/**
 * puts_half - Prints half of a string
 * @str: String to print
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len, i;

	len = _strlen(str) - 1;


	if (len % 2)
		len = (len + 1) / 2;
	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
