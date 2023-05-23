#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: character to chech
 *
 * Return: 1 if true else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
