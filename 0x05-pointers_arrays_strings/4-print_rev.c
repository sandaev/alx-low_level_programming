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
 * print_rev - Prints a string in reverse
 *
 * @s: Pointer to string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = _strlen(s) - 1;

	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
