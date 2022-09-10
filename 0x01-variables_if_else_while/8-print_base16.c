#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c1, c2;

	/* Prints the digits 0 - 9 */
	for (c1 = 48; c1 <= 57; c1++)
	{
		putchar(c1);
	}
	/* Prints a - f */
	for (c2 = 97; c2 <= 102; c2++)
	{
		putchar(c2);
	}
	putchar(10);
	return (0);
}
