#include "main.h"
/**
 * _strlen - Returns the length of string that s poimts to
 *
 * @s: the string whose length is to be determined.\
 *
 * Return: length of string s as integer.
 */
int _strlen(char *s)
{
	int len, i;

	len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}
	return (len);
}
