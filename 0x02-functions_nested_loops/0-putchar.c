#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char myString[] = "_putchar";
	int i;

	for (i = 0; myString[i] != '\0'; i++)
	{
		_putchar(myString[i]);
	}
	_putchar('\n');

	return (0);
}
