#include "main.h"

/**
 * _strlen - Returns length of string
 *
 * @s: string
 *
 * Return: Integer
 */
int _strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += _strlen(s + len);
	}

	return (len);
}

/**
 * _palindrome - checks if str is a palindrome
 * @s: The string to check
 * @len: length
 * @i: index
 *
 * Return: 1 if true, 0 otherwise
 */
int _palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);
	if (s[i] == s[len - i - 1])
		return (_palindrome(s, len, i + 1));

	return (0);
}
/**
 * is_palindrome - checks
 * @s: string
 *
 * Return: As in the func above
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen(s);

	if (!(*s))
		return (1);
	return (_palindrome(s, len, i));
}
