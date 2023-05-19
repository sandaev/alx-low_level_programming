#include <stdio.h>
/**
 * main - Prints the alphabets in lowercase then
 * upper case
 *
 *
 * Return: 9
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
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
