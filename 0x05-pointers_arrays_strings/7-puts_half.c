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
	int len, n, i;

	len = _strlen(str);


	if (len % 2)
		n = (len - 1) / 2;
	else
		n = len / 2;
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
