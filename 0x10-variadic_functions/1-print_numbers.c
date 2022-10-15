#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers
 *
 * @separator: pointer to string that separates the numbers
 *
 *@n: Number of integers passed to the functions
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	ui num, c;

	c = 0;
	while (c < n)
	{
		num = va_arg(nums, ui);
		printf("%d", num);
		if (!(separator == NULL) && !(c == (n - 1)))
		{
			printf("%s", separator);
		}
		c++;
	}
	va_end(nums);
	printf("\n");
}
