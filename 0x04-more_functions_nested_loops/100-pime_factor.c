#include <stdio.h>
#define NUM 612852475143
/**
 * main - Entry point
 *
 * Description- prints the largest prime factor of a number.
 *
 * Return: Always 0
 */
int main(void)
{
	int pf, i, largest, j;

	largest = 2;

	for (i = 2; i <= NUM; i++)
	{
		if (!(NUM % i))
		{
			for (j = 2; j <= i; j++)
			{
				if (!(i % j))
				{
					if (i == j)
					{
						pf = i;
					}
				}
			}
		}
		if (pf > largest)
		{
			largest = pf;
		}
	}
	printf("%d\n", largest);
	return (0);
}



	

