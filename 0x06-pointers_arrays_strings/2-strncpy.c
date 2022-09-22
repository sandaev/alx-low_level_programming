#include "main.h"
/**
 * _strncpy - function that xopies a string
 *
 * @dest: string to copy to
 *
 * @src: string to copy from
 *
 * @n: bytes to be copied
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *ptrDest;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for ( ; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	ptrDest = dest;
	return (ptrDest);
}
