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

	/* Get length of str */
	len = 0;
	while (str[len])
	{
		len++;
	}
	/* Allocation memory */
	_str = malloc(len * sizeof(char));
	/* Check if memory is assigned or not */
	if (str == NULL || _str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		_str[i] = str[i];
	}
	return (_str);
}
