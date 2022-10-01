#include "main.h"
/**
 * main - Entry point, prints number of arguments passed
 *
 * @argc: number of arguments
 *
 * @argv: array of
 *
 * @Return: Integer
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	/* Declare variable to hold the count */
	int i;

	i = argc - 1;
	/* If i greater than zero, call hellper function. Otherwise, print zero)*/
	if (i > 0)
	{
		_print_num(i);
	}
	else
	{
		_putchar('0');
	}
	_putchar('\n');
	return (0);
}
