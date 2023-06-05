#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - Gets the length of a prefix substring
 *
 * @s: Pointer to string
 * @accept: substring
 *
 * Return: Number of bytes in the initial segment
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr;
	int found;

	found = 0;
	for (; *s != '\0'; s++)
	{
		for (ptr = accept; *ptr != '\0'; ptr++)
		{
			if (*s == *ptr)
			{
				found = 1;
				break;
			}
		}
		if (found)
			break;
	}
	if (*s)
		return (s);
	else
		return (NULL);
}
