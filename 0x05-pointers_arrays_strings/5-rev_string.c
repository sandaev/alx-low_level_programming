#include "main.h"
/**
 * rev_string - Reverses string using pointer
 *
 * @s: pointer to the string to be reversed
 *
 * Return: Void
 */
void rev_string(char *s)
{
	int len, i;
	char ch, *begin_str, *end_str;

	/* Initializatio */
	len = 0;
	begin_str = s;
	end_str = s;

	/* Determine the length of strig */
	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}
	/* Shift end_str to the end */
	i = 0;
	while (i < len - 1)
	{
		end_str++;
	}
	/* Swap characters from beginning and ending */
	i = 0;
	while (i < len / 2)
	{
		ch = *end_str;
		*end_str = *begin_str;
		*begin_str = ch;

		begin_str++;
		end_str--;
		i++;
	}
}
