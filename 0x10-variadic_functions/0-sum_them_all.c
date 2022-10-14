#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Sums the arguments of function
 *
 * @n: Number of unspecified arguments
 *
 * Return: Integer sum
 */
int sumn_them_all(const unsigned int n, ...)
{
	va_list argList;
	ui sum, i;

	/* Returns 0 if n = 0 */
	if (n == 0)
	{
		return (0);
	}
	/* Calculate and return sum of args using MACROS */
	va_start(argList, n);
	sum = 0;
	i = 0;
	while (i < n)
	{
		sum += va_arg(argList, ui);
		i++;
	}
	/* Clean up */
	va_end(argList);
	return (sum);
}
