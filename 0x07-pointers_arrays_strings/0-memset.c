#include "main.h"
/**
 * _memset - Fills memory with a constant byte.
 *
 * @s: pointer tothe memory area
 *
 * @b: Constant byte
 *
 * @n: number of bytes
 *
 * Return: A pointer to the memory area.
 */
char *_memset(char *s, char *b, unsigned int n)
{
	char *str;
	int i;

	for (i = 0; i <= n; i++)
	{
		*(s + i) = b;
	}
	str = s;
	return (str);
}
