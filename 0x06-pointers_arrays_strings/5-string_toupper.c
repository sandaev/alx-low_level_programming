#include "main.h"

/**
 * string_toupper - Chamge lowercase of a string to uppercase
 * @str: Pointer to string
 *
 * Return: Pointer to string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
