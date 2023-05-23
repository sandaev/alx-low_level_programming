#include "main.h"
/**
 * main - Prints _putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char *msg = "_putchar";

	while (*msg != '\0')
	{
		_putchar(*msg);
		msg++;
	}
	_putchar('\n');

	return (0);
}
