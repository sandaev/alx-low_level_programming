#include "main.h"
#include <stdio.h>
/**
 * string_toupper - Converts lowercase letters in a string to
 * uppercase
 *
 * @s: string to be converted
 *
 * Return: Pointer to string
 */
char *string_toupper(char *s)
{
	char *ptr, ch;
	int i, j;

	const char UPPER[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const char LOWER[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (*(s + i) == LOWER[j])
			{
				*(s + i) = UPPER[j];
			}
			else
			{
				continue;
			}
		}
	}
	ptr = s;
	return (ptr);
}
