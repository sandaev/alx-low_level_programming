#include "main.h"
/**
 * _strncat - Concatenates two string, exaclty n bytes from second string
 *
 * @dest: String to be concatenated to
 *
 * @src: string to concatenate
 *
 * @n: amount of bytes
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptrDest;
	int totalBytes, lenDest, i, j;

	totalBytes = lenDest = 0;
	for (i = 0; *(dest + i) != '\0'; i++)
	{
		lenDest++;
	}
	for (j = 0; *(src + j) != '\0'; j++)
	{
		if (totalBytes <= n)
		{
			*(dest + (lenDest + j)) = *(src + j);
			totalBytes += 1;
		}
		else
		{
			break;
		}
	}
	ptrDest = dest;
	return (ptrDest);
}
