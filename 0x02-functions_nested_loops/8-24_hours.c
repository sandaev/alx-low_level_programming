#include "main.h"
/**
 * jack_bauer- Prints every minute of the day of jack bauer
 *
 * Return: Returns void
 */
void jack_bauer(void)
{
	char h1, h2, m1, m2;

	h1 = 48;
	while (h1 <= 50)
	{
		h2 = 48;
		while (h2 <= 51)
		{
			m1 = 48;
			while (m1 <= 53)
			{
				m2 = 48;
				while (m2 <= 57)
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(':');
					_putchar(m1);
					_putchar(m2);
					_putchar('\n');
					m2++;
				}
				m1++;
			}
			h2++;
		}
		h1++;
	}
}

