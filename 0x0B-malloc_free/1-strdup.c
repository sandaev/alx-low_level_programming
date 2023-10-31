#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string as given
 *
 * @str: String to return
 * Return: Pointer to string
 */
char *_strdup(char *str)
{
	/* Varaible declaration */
	int len;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str(len))
		len++;
	/* Allocate memory */
	_str = malloc(len * sizeof(char) + 1);
	if (_str == NULL)
		return (NULL);
	/* Copy string into memory */
	for (i = 0; i <= len; i++)
		_str[i] = str[i];
	return (_str);
}
