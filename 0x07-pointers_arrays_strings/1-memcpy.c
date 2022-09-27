#include "main.h"
/**
 * _memcpy - Copies memory area
 *
 * @dest: Pointer to the memory area to be copies
 *
 * @src: Memory area to copy drom
 *
 * @n:Size to copy
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr;
	int i, size, j;

	i = 0;
	while (*(dest + i))
	{
		i++;
	}
	for (j = 0; j <= n, i < size + n; i++, j++)
	{
		*(dest + i) = *(src + j);
	}
	ptr = dest;
	return (ptr);
}
