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
	int len_d, len_s, i;

	for (len_d = 0; dest[len_d] != '\0'; len_d++)
	{
		;
	}

	for (; *src; src++, len_d++)
		dest[len_d] = *src;

	return (dest);
}
