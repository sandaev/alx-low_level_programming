#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest: Pointer to destination
 * @src: Pointer to source
 *
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int len_d, i;

	for (len_d = 0; dest[len_d] != '\0'; len_d++)
	{
		;
	}

	for (i = 0; src[i] != '\0'; i++, len_d++)
		dest[len_d] = src[i];
	dest[len_d] = '\0';

	return (dest);
}
