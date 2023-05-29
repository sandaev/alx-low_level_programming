#include "main.h"

/**
 * _strcpy - Copies string
 *
 * @dest: Buffer destination
 * @src: Buffer source
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];

	return (dest);
}
