#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: to be concatenated to
 *
 * @src: pointer to the string to be concatenated
 *
 * Return: Pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	static char *ptrDest;
	int len, lenDest, i;

	len = 0;
	/* Get the length of dest */
	for (i = 0; *(dest + i) != '\0'; i++)
	{
		len++
	}

	lenDest = len;
	len = 0;
	len = lenDest;
	/* Add the characters of src to dest */
	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + (lenDest + i)) = *(src + i);
		len++;
	}

	*(dest + len) = '\0';
	ptrDest = dest;
	return (ptrDest);
}
