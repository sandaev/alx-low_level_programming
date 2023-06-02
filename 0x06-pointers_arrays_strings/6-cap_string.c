#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 *
 * @str: String to capital.
 *
 * Return: Pointer to string
 */
char *cap_string(char *str)
{
	int i;
	char chr, *p;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			/* Check if first letter is lowercase */
			if ((*(str + i) >= 'a' && *(str + i) <= 'z'))
				*(str + i) = *(str + i) - 32;
			continue;
		}
		chr = *(str + i);
		if ((chr >= ' ' && chr <= '"') || chr == '\n' || chr == '\t')
			continue;
		else
		{
			if ((chr >= 'a' && chr <= 'z'))
			{
				*(str + i) = *(str + i) - 32;
			}
			else
				continue;
		}

	}

	p = str;
	return (p);
}
