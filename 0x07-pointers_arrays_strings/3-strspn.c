#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer tp the strimg to searched
 *
 * @accept: prefix
 *
 * Return: Length
 */
unsigned int _strspn(char *s, char *accept)
{
	char *ptr;
	unsigned int n;

	for (n = 0; *s; s++, n++)
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
