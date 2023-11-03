#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _len - Returns the length of string
 * @str: String literal
 * Return: Integer
 */
unsigned int _len(char *str)
{
	unsigned int x;

	if (str == NULL || *str == ' ')
		return (0);

	for (x = 0; *str++ != '\0'; x++)
		;
	return (x);
}
/**
 * _strcpy - Copies strings
 * @s1: String 1
 * @s2: String 2
 * @newStr: Newly formed string
 * @n: Number of bytes
 * @l2: Length of s2
 * @l1: Len of s1
 * Return: Nothing
 */
void _strcpy(char *s1, char *s2, char *newStr, unsigned int n, unsigned int l2)
{
	int idx;

	for (idx = 0; s1[idx] != '\0'; idx++)
		newStr[idx] = s1[idx];
	if (idx)
	{
		newStr[idx] = ' ';
		idx++;
	}
	if (n >= l2)
	{
		for (; *s2 != '\0'; idx++, s2++)
			newStr[idx] = *s2;
	}
	else
	{
		for (l2 = 0; l2 < n; l2++, idx++)
		{
			newStr[idx] = s2[l2];
		}
	}
	newStr[idx] = '\0';
}
/**
 * *string_nconcat - Concatenates two strings
 * @s1: String one
 * @s2: String two
 * @n: Number of bytes to copy from str2
 * Return: Pointer to newly allocated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* Declaration */
	char *newStr;
	unsigned int l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = _len(s1);
	l2 = _len(s2);
	/* Allocate memory */
	if (n >= l2)
		newStr = malloc(sizeof(char) * (l1 + l2));
	else
		newStr = malloc(sizeof(char) * (l1 + n));
	/* Checks memory */
	if (newStr == NULL)
		return (NULL);
	/* Copies strings */
	_strcpy(s1, s2, newStr, n, l2);
	return (newStr);
}
