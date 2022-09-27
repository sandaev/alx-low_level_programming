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
	unsigned int i;

	i = 0;
	for ( ; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	ptr = dest;
	return (ptr);
}
