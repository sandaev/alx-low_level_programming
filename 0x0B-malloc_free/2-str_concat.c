#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to concatenate string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, len_s1, len_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		;
	len_s1 = i;
	for (i = 0; s2[i]; i++)
		;
	len_s2 = i;
	str = malloc((len_s1 + len_s2) * sizeof(char) + sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++, len_s1++)
		str[len_s1] = s2[i];
	str[len_s1] = '\0';

	return (str);
}
