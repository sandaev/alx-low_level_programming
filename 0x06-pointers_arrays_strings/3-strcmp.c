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
	int i, g, l, e;

	i = g = l = e = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
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
		else
		{
			l = 1;
			g = e = 0;
		}
		i++;
	}

	if (e)
		return (0);
	else if (g)
		return (15);
	else if (l)
		return (-15);
}
