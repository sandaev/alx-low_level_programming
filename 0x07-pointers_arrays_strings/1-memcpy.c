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
	int i, size, j, k;

	i = size = 0;
	while (*(s + i))
	{
		size++;
		i++;
	}
	for (j = 0; k = size; j <= n; k < size + n; j++; k++)
	{
		*(dest + i) = *(src + j);
	}
	ptr = dest;
	return (ptr);
}
