#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Adds postive numbers
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Int
 */
int main(int argc, char *argv[])
{
	/* Variable Declaration */
	int sum, i, c, flag;

	sum = 0;
	c = 0;
	flag = 0;

	if (argc == 1)
		printf("%d\n", 0);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				c++;
				flag = 1;
			}
			sum += atoi(argv[i]);
		}
		if ((c == i && flag) && sum == 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		else if (flag && sum != 0)
		{
			printf("Error\n");
			return (1);
		}
		else
			printf("%d\n", sum);
	}
	return (0);
}
