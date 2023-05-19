#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int f, s, t;

	f = '0';
	while (f <= '9')
	{
		s = '0';
		while (s <= '9')
		{
			t = '0';
			while (t <= '9')
			{
				if (f < s && s < t)
				{
					putchar(f);
					putchar(s);
					putchar(t);
					if (f != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
				t++;
			}
			s++;
		}
		f++;
	}
	putchar('\n');

	return (0);
}
