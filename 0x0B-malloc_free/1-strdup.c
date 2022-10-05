#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a oarameter
 *
 * @str: string to return
 *
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	/* Declare variables */
	char *_str;
	int len, i;

	/* Check if str is null or empty */
	if (str == NULL)
	{
		return (NULL);
	}
	/* Get the length of str */
	len = 0;
	while (str[len])
	{
		len++;
	}
	/* Allocate memory */
	_str = malloc(len * sizeof(char) + 1);
	if (_str == NULL)
	{
		return (NULL);
	}
	/* Copy str into memory and return pointer to memory */
	for (i = 0; i <= len; i++)
	{
		_str[i] = str[i];
	}
	return (_str);
}
