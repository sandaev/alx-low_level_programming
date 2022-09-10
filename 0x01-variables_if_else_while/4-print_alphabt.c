#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;

	count = 97;

	while (count <= 122)
	{
		if (count != 101 || count != 113)
			putchar(count);
		count += 1;
	}
	putchar(10);
	return (0);
}
