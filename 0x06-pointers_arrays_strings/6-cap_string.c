#include "main.h"
/**
 * cap_string - capitalizes each word of a string
 *
 * @s: pointer to the string to be capilatized
 *
 * Return: Pointer to the new string
 */
char *cap_string(char *s)
{
	char *ptr, ch;
	int i;

	/* Check each letter */
	for (i = 0; *(s + i) != '\0'; i++)
	{
		/* is first letter lowercase */
		if ((*(s + i) >= 'a' && *(s + i) <= 'A'))
		{
			*(s + i) = *(s + i) - 32; /* capitalize*/
		}
		continue; /* If not continue iterating */
	}
	ch = *(s + i);
	if ((ch >= ' ' && ch <= '"') || ch == '\n' || ch == '\t') 
	{
		continue;
	}
	else
	{
		if ((ch >= 'a' && ch <= 'z'))
		{
			*(s + i) = *(s + i) - 32;
		}
	}
	ptr = s;
	return (ptr);
}
