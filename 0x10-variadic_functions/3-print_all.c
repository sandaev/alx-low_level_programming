#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Print anything based on format and arguments passed
 *
 * @format: Pointer to string specifiers
 *
 * Return: Nothimg
 */
void print_all(const char * const format, ...)
{
	char *fmt;
	char *s;
	int i;
	char c;
	float f;

	fmt = format;
	va_list inputs;

	va_start(inputs, format);

	if (*fmt == NULL)
	{
		printf("(nil)");
		exit(1);
	}

	while (*fmt != '\0')
	{
		/* Check for valid type */
		if (*fmt == 'c' || *fmt == 'i' || *fmt == 'f' || *fmt == 's')
		{
			/* Hand;les different types */
			switch (*fmt) {
				case 'c':
					c = (char)va_arg(inputs, int);
					printf("%c\n", c);
					break;
				case 'f':
					f =(float) va_arg(inputs, double);
					printf("%f\n", f);
					break;
				case 'i':
					i = va_arg(inputs, int);
					printf("%d\n", i);
					break;
				case 's':
					s = va_arg(inputs, char *);
					printf("%s\n", s);
					break;
				default:
					break;
			}
		}
		fmt++;
	}
	va_end(inputs);
}

