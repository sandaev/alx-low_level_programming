#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: Pointer to char
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *(s + len) != '\0'; len++)
	{
		;
	}

	return (len);
}
