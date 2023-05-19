#include <stdio.h>
/**
 * main - Prints all combinations of single digits numbers
 *
 * Return: 0
 */
int main(void)
{
	int first_num, sec_num;

	first_num = '0';

	while (first_num <= '9')
	{
		sec_num = '0';
		while (sec_num <= '9')
		{
			if (sec_num >= first_num && sec_num != first_num)
			{
				putchar(first_num);
				putchar(sec_num);
				if (first_num != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		sec_num++;
		}
		first_num++;
	}
	putchar('\n');
	return (0);
}
