#include "main.h"
/**
 * _strlen - Returns the length of string
 *  @str: pointer to string
 *
 *  Return: Integer
 */
int _strlen(const char *str)
{
	int len = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
