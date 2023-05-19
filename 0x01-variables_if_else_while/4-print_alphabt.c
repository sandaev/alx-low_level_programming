#include <stdio.h>
/**
 * main - Prints alphabets but q and e
 *
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			continue;
		else
			putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
