#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - Finds length of string
 * @str: String
 *
 * Return: Length of string
 */
int _strlen(char *str)
{
	int len;

	if (str == NULL)
		return (0);

	for (len = 0; *(str + len) != '\0'; len++)
		;
	return (len);
}

/**
 * _strstr - Locates a subtring
 *
 * @haystack: String to search
 * @needle: String to be located
 *
 * Return: Pointer to the beginning of subtsring if found
 * otherwise, NULL
 */
char *_strstr(char *haystack, char *needle)
{
	/* Declare variables */
	int i, j, k, len, exists;

	exists = k = 0;
	len = _strlen(needle);

	/* If empty string */
	if (len == 0)
		return (NULL);

	/* Compare each element of haystack */
	for (i = 0; *(haystack + i); i++)
	{
		/* Iterate through needle */
		for (j = 0; j < len; j++)
		{
			if (*(haystack + i) == *(needle + j))
			{
				k++; /* Checks length of substring */
				break;
			}
			else
				continue;
		}
		if (k == len - 1)
		{
			exists = 1;
			break;
		}
	}
	if (exists)
	{
		/* Pointer to the beginning of substr */
		return ((haystack + (i - j)));
	}

	else
		return (NULL);
}
