#include "main.h"

/**
 * _strncat - Concatenates two strings n bytes
 *
 * @dest: Pointer to destination
 * @src: Pointer to source
 * @n: Number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_d, len_s, i;

	for (len_d = 0; dest[len_d] != '\0'; len_d++)
	{
		;
	}
	for (len_s = 0; src[len_s] != '\0'; len_s++)
	{
		;
	}

	if (n <= len_s - 1)
	{
		for (i = 0; i < n; len_d++, i++)
		{
			dest[len_d] = src[i];
		}
	}
	else
	{
		for (; *src; src++, len_d++)
			dest[len_d] = *src;
	}

	return (dest);
}
