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
	int i, _s1, _s2;

	_s1 = _s2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		_s1 += s1[i];
		_s2 += s2[i];
	}

	if (_s1 == _s2)
		return (0);
	else if (_s1 > _s2)
		return (15);
	else
		return (-15);
}
