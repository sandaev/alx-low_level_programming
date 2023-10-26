#include "main.h"

/**
 * _strlen - Returns string length
 *
 * @s: Pointer to string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int l;

	l = 0;

	if (*(s + l))
	{
		len++;
		len += _strlen(s + len);
	}

	return (len);
}
/**
 * check - Checks if s is a palindrome
 * @s: Pointer to string
 * @len: Length of string
 * @i: position of character in s
 *
 * Return: 1 if true, otherwise 0
 */
int check(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);
	if (s[index] == s[len - i - 1])
		return (check(s, len, i));
	return (0);
}
/**
 * is_palindrome - Checks if a string is palindrome or not.
 *
 * @s: Pointer to string
 *
 * Return: 1 if s is a palindrome.
 * 0 otherwise.
 */
int is_palindrome(char *s)
{
	int i, len;

	i = 0;
	len = _strlen(s);

	if (!(*s))
		return (1);
	return (check(s, len, i));
}
