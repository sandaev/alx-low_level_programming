#include <stdio.h>
#include <ctype.h>
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
	int sum, i, j;

	i = 1;
	sum = j = 0;

	if (argc == 1)
		printf("%d\n", 0);
	if (argc > 1)
	{
		for (; argv[i]; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
