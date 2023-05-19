#include <stdio.h>
/**
 * main - Prints the alphabets in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
