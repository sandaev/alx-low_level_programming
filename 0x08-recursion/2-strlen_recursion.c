#include "main.h"

/**
 * _count - A helper function that counts
 *
 * @s: Pointer to string
 * @c: Variable for string length
 *
 * Return: c
 */
int _count(char *s, int c)
{

	if (*s == '\0')
	{
		return (c);
	}
	else
	{
		s++;
		c++;
		return (_count(s, c));
	}
}
/**
 * _strlen_recursion - Returns the length of a sting recursively
 * @s: Pointer to string
 *
 * Return: Integer
 */
int _strlen_recursion(char *s)
{
	int c, res;

	c = 0;

	res = _count(s, c);

	return (res);
}
