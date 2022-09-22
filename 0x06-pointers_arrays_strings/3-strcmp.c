#include "main.h"
/**
 * _strcmp - compare two strings
 *
 * @s1: pointer to the first string
 *
 * @s2: pointer to the second string
 *
 * Return: integer type
 */
int _strcmp(char *s1, char *s2)
{
	int i, sizeOfs1, sizeOfs2, sizeDiff;
	char ch1, ch2;

	sizeOfs1 = sizeOfs2 = 0;

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		ch1 = *(s1 + i);
		sizeOfs1 += ch1;
	}
	for (i = 0; *(s2 + i) != '\0'; i++)
	{
		ch2 = *(s2 + i);
		sizeOfs2 += ch2;
	}
	sizeDiff = sizeOfs1 - sizeOfs2;
	return (sizeDiff);
}
