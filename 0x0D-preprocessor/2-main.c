#include "main.h"

/**
 * main - Prints name of file
 *
 * Return: Always 0
 */
int main(void)
{
	/* Declaration */
	int i;
	char s[] = _FILE_;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

	return (0);
