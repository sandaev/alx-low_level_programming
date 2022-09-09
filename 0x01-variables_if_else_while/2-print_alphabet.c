#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int counter;

	counter = 97;
	while (counter <= 122)
	{
		putchar(counter);
		counter += 1;
	}
	putchar(10);
	return (0);
}
