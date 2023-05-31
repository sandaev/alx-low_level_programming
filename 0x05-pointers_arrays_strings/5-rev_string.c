#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: Pointer to char
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *(s + len) != '\0'; len++)
	{
		;
	}
	return (len);
}

/**
 * rev_string - Reverses string s
 *
 * @s: Pointer to string
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	char tmp;
	int i, n, l;

	n = _strlen(s);
	l = n - 1;
	for (i = l; i >=  n / 2; i--)
	{
		/*swap_str(s, i, (n - i - 1));*/
		tmp = s[i];
		s[i] = s[l - i];
		s[l - i] = tmp;
	}
}
