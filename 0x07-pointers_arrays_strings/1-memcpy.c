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
	unsigned int i, size, j, k;

	i = 0; 
	size = 0;
	while (*(dest + i))
	{
		size++;
		i++;
	}
	k = size;
	for (j = 0; j <= n, k < size + n; j++, k++)
	{
		*(dest + k) = *(src + j);
	}
	ptr = dest;
	return (ptr);
}
