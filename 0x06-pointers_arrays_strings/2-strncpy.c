#include "main.h"

/**
 * _strncpy - Concatenates two strings n bytes
 *
 * @dest: Pointer to destination
 * @src: Pointer to source
 * @n: Number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len_s;

	/* Get the of src */
	for (len_s = 0; src[len_s] != '\0'; len_s++)
		;

	/* if n <= len_s */
	if (n <= len_s)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	/* else add null bytes to make upto n */
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i >= len_s)
			{
				dest[i] = '\0';
			}
			else
				dest[i] = src[i];
		}
	}

	return (dest);
}
