#include "main.h"
/**
 * _memcpy - copies memory area
 *
 * @dest: pointer to the memory area to be copied to
 *
 * @src: memory area to be from
 *
 * @n: number of bytes to be copies
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr;
	unsigned int i, j, size;

	i = 0;
	while (*(dest + i))
	{
		i++;
	}
	size = i;
	for (j = 0; j <= n, i < size + n; j++, i++)
	{
		*(dest + i) = *(src + j);
	}
	ptr = dest;
	return (ptr);
}
