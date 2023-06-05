#include "main.h"

/**
 * _memcpy - Copies memory area
 *
 * @dest: Where to copy to
 * @src: Where to copy from
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
