#include "main.h"
/**
 * puts2 - prints every other character of a string, followed by a new line
 *
 * @s: pointer to the string
 *
 * Return: void
 */
void puts2(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (i == 0)
		{
			_putchar(*(s + i));
		}
		else if (i % 2)
		{
			continue;
		}
		else
		{

			_putchar(*(s + i));
		}
	}
}
