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
	char *destPtr;
	int totalBytes, lenDest;

	totalBytes = lenDest = 0;
	for (int i = 0; *(dest + i) != '\0'; i++)
	{
		lenDest++;
	}
	for (int j = 0; *(src + j) != '\0'; j++)
	{
		if (totalBytes <= n)
		{
			*(dest + (lenDest + j)) = *(src + j);
			totalBytes += sizeof(j);
		}
		else
		{
			break;
		}
	}
	destPtr = dest;
	return (destPtr);
}
