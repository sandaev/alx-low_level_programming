#include <stdio.h>
/**
 *main - Entry point
 * Description- The program is the popular FizzBuzz
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if (!(i % 3))
		{
			if (!(i % 5))
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("Fizz ");
			}
		}
		else if (!(i % 5))
		{
			if (!(i % 3))
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
