#include "main.h"
/**
* _puts - prints a string, followed by a newline
*
* @str: Pointer to the string to be printed
*
* Return: Void
*/
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
