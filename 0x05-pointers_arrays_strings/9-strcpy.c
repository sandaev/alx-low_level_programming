#include "main,h"
/**
 * _strcpy- copies the string pointed to by src to the buffer pointed
 * to by dest
 *
 * @dest: pointer to destination buffer
 * @src: pointer to the string to be copied
 *
 * Return: Char (pointer)
 */
char *_strcpy(char *dest, char *src)
{
	static char *ptr;
	int len, i;

	len = 0;
	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
		len++;
	}
	*(dest + len) = '\0';
	ptr = dest;
	return (dest);
}
