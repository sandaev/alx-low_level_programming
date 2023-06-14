#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to str
 *
 * Return: Length of str
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


/**
 * _strdup - Copy string to another memory location
 * @str: String to copy
 *
 * Return: Pointer to string
 */
char *_strdup(char *str)
{
	char *str2;
	int i;
	int size = _strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	str2 = malloc(size * sizeof(char));

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str2[i] = str[i];

	}

	return (str2);

}
