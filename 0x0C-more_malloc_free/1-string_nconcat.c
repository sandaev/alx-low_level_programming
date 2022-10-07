#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: Number of bytes
 * Return: Pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* Declare variables */
	char *str;
	unsigned int size, len_s1, len_s2;

	/* check s1, s2 is NULL and treat as empty string */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	/* Get memory size */
	size = mal_size(s1, s2, n);
	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	/* Copy s1 into allocated memory space */
	_concat(str, (int)len_s1, (int)len_s2, (int)n, s1, s2);
	return (str);
}
/**
 * mal_size - Determines the size for malloc
 *
 * @s1: Pointer to first string
 *
 * @s2: Pointer to string two
 *
 * @n: Number of bytes
 *
 * Return: Size
 */
unsigned int mal_size(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, size;

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	if (n >= len_s2)
	{
		size = len_s1 + len_s2 + 1;
	}
	else
	{
		size = len_s1 + n + 1;
	}
	return (size);
}
/**
 * _strlen - Determines the length of a string pointed to
 *
 * @str: Pointer to the string
 *
 * Return: Length of string
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/**
 * _concat - Concatenates s1 and s2
 * @str: pointer to memory
 * @ls1: length of string s1
 * @ls2: length of string s2
 * @s1: String 1
 * @s2: String 2
 * @n: number of bytes
 * Return: Nothing
 */
void _concat(char *str, int ls1, int ls2, int n, char *s1, char *s2)
{
	int i;

	i = 0;

	for (i = 0; i < ls1; i++)
	{
		str[i] = s1[i];
	}
	if (n >= ls2)
	{
		for (i = 0; i < ls2; i++)
		{
			str[ls1] = s2[i];
			ls1++;
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			str[ls1] = s2[i];
			ls1++;
		}
	}
	str[ls1] = '\0';
}
