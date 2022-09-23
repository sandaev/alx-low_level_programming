#include "main.h"
/**
 *rot13 - Encodes a string
 *
 *@str: string to be encoded
 *
 *Return: Encoded string
 */
char *rot13(char *str)
{
	char *ptr;
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		while ((*(s + i) >= 'A' && *(s + i) <= 'Z') || (*(s + i) >= 'a' && *(s + i) <= 'z'))
		{
			if (((*(s + i) < 'N') && (*(s + i) >= 'A')) || ((*(s + i) < 'n') && (*(s + i) >= 'a')))
			{
				*(s + i) = *(s + i) + KEY;
				break;
			}
			else
			{
				*(s + i) = *(s + i) - KEY;
				break;
			}
		}
		i++;
	}
	ptr = str;
	return (ptr);
}
