#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	int sum, i, j;
	char c;

	sum = 0;
	i = 1;
	j = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	if (argc > 1)
	{
		for (; argv[i]; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				c = argv[i][j];
				if (!(isdigit(c)))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (1);
}
