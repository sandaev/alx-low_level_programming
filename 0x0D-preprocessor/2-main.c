#include "main.h"

/**
 * main - Prints the name of the source file using macros
 *
 * Return: Always 0.
 */
int main(void)
{
	/* Declares variables */
	int i;
	char s[] = __FILE__;

	/* Initialize s with the macors __FILE__ */
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\0');
	return (0);
}
