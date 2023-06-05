#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: Pointer to string
 * @accept: subtring
 *
 * Return: Number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	char *ptr;

	n = 0;
	for (; *s; s++, n++)
	{
		for (ptr = accept; *ptr && *ptr != *s; ptr++)
		{
			;
		}
		if (!*ptr)
		{
			break;
		}
	}

	return (n);
}
