#include <stdio.h>
/**
 * main - Prints hexadecimal digits in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	num = 'a';
	while (num <= 'f')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
