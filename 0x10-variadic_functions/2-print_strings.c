#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - Prints strings followed bya new line
 *
 * @separator: Pointer to word separator
 *
 * @n: Number of strings passed to the function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	ui c;
	char *str;

	va_start(strs, n);
	c = 0;
	while (c < n)
	{
		str = va_arg(strs, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{

			printf("%s", str);
		}
		if (!(separator == NULL) && !(c == (n - 1)))
		{
			printf("%s", separator);
		}
		c++;
	}
	va_end(strs);
	putchar('\n');
}
