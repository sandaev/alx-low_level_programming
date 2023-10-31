#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"
/**
 * _change - Determines minimum change
 * @num: Cents
 * @coin: Coins
 * @c: Pointer to count
 *
 * Return: Cents remaining
 */
int _change(int num, int coin, int *c)
{
	int d, rem;

	rem = num % coin;
	if (rem)
	{
		*c += (num - rem) / coin;
		num = rem;
	}
	else
	{
		*c += num / coin;
		d = num / coin;
		num /= coin;
		num -= d;
	}

	return (num);
}
/**
 * main - Calculation least change
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count, num;
	int *ptr;

	count = 0;
	ptr = &count;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[argc - 1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		num = atoi(argv[argc - 1]);
		while (num != 0)
		{
			if (num >= 25)
				num = _change(num, 25, ptr);
			else if (num >= 10)
				num = _change(num, 10, ptr);
			else if (num >= 5)
				num = _change(num, 5, ptr);
			else if (num >= 2)
				num = _change(num, 2, ptr);
			else if (num >= 1)
				num = _change(num, 1, ptr);
		}
	}
	printf("%d\n", count);

	return (0);
}
