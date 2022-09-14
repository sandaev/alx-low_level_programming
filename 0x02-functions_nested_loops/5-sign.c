#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * @n: the number whose sign to be printed
 *
 * Return: 1 if postive, 0 if zero and -1 if n is negative 
 */
int print_sign(int n)
{
	int result;
	char sign;
	if (n > 0)
	{
		sign = '+';
		result = 1;
	}
	else if (n < 0)
	{
		sign = '-';
		result = -1;
	}
	else if (n == 0)
	{
		sign = '0';
		result = 0;
	}
	_putchar(sign);
	return (result);
}
