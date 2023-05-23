#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int min, sec;

	for (min = 0; min <= 23; min++)
	{
		for (sec = 0; sec <= 59; sec++)
		{
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar(':');
			_putchar(sec / 10 + '0');
			_putchar(sec % 10 + '0');
			_putchar('\n');
		}
	}
}
