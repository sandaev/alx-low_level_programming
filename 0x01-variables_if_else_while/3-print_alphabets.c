#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowerCount, upperCount;

	lowerCount = 97;
	upperCount = 65;

	while (lowerCount <= 122)
	{
		putchar(lowerCount);
		lowerCount += 1;
	}
	while (upperCount <= 90)
	{
		putchar(upperCount);
		upperCount += 1;
	}
	return (0);
}
