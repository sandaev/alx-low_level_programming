#include <stdio.h>
/**
 * main - Prints to stderr
 *
 * Return: Returns 1
 */
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fputs(s, stderr);

	return (1);
}
