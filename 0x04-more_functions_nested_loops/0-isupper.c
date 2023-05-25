#include "main.h"

/**
 * _isupper - Checks if a letter is uppercase
 *
 * @c: 0
 *
 * Return: 1 if true, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
