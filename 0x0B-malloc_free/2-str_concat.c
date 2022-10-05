#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: First string
 *
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	/* Declare variables */
	char *str;
	int i, len_s1, len_s2;

	/* Get the length of s1 and s2 */
	for (i = 0; s1[i]; i++)
	{
		;
	}
	len_s1 = i;
	for (i = 0; s2[i]; i++)
	{
		;
	}
	len_s2 = i;
	str = malloc((len_s1 + len_s2) * sizeof(char) + sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		str[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++, len_s1++)
	{
		str[len_s1] = s2[i];
	}
	str[len_s1] = '\0';
	return (str);
}
