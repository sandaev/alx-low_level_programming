#include "main.h"

/**
 * _strcmp - Compares two strings
 *
 * @s1: Pointer to first string
 * @s2: Pointer to second second string
 *
 * Return: Nothing
 */
int _strcmp(char *s1, char *s2)
{
	/* Declare variables */
	int i, g, l, e, ret;

	i = g = l = e = 0;
	if (s1[0] == '\0')
		return (-15);

	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			e = 1;
			g = l = 0;
		}
		else if (s1[i] > s2[i])
		{
			g = 1;
			l = e = 0;
		}
		else if (s1[i] < s2[i])
		{
			l = 1;
			g = e = 0;
		}
		i++;
	}

	if (e)
		ret = 0;
	else if (g)
		ret = 15;
	else if (l)
		ret = -15;
	return (ret);
}
