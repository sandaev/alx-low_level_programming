#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to striing
 * @c: Character to be located
 *
 * Return: Pointer to first occurrence of c or NULL if
 * not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			break;
		}
		s++;
	}
	if (*s != '\0')
		return (s);
	else
		return (NULL);
}
