#include "main.h"
/**
 * _strchr - locates a character, c in a string
 *
 * @s: string to be searched
 *
 * @c: character to be found
 *
 * Return: First occurrence of character
 */
char *_strchr(char *s, char c)
{
	char *ptr;
	/* Move through the string while there is no match */
	/* and notat the end */
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (ptr);
	}
}
