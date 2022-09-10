#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = 48;

	do {
		putchar(c);
		c += 1;
	} while (c <=57);
	putchar(10);
	return (0);
}
